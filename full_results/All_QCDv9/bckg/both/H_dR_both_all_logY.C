#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_all_logY()
{
//=========Macro generated from canvas: H_dR_both_all/H_dR_both_all
//=========  (Mon Dec 19 11:15:39 2022) by ROOT version 6.26/06
   TCanvas *H_dR_both_all = new TCanvas("H_dR_both_all", "H_dR_both_all",0,0,600,600);
   H_dR_both_all->SetHighLightColor(2);
   H_dR_both_all->Range(-1.353788,-1.488821,7.264125,10.99606);
   H_dR_both_all->SetFillColor(0);
   H_dR_both_all->SetFillStyle(4000);
   H_dR_both_all->SetBorderMode(0);
   H_dR_both_all->SetBorderSize(2);
   H_dR_both_all->SetLogy();
   H_dR_both_all->SetLeftMargin(0.15709);
   H_dR_both_all->SetRightMargin(0.1234783);
   H_dR_both_all->SetBottomMargin(0.12);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(5.405692);
   st->SetMaximum(2.058809e+09);
   
   TH1F *st_stack_136 = new TH1F("st_stack_136","",30,0,6);
   st_stack_136->SetMinimum(1.021796);
   st_stack_136->SetMaximum(5.592039e+09);
   st_stack_136->SetDirectory(0);
   st_stack_136->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_136->SetLineColor(ci);
   st_stack_136->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_136->GetXaxis()->SetRange(1,31);
   st_stack_136->GetXaxis()->SetLabelFont(42);
   st_stack_136->GetXaxis()->SetTitleOffset(1);
   st_stack_136->GetXaxis()->SetTitleFont(42);
   st_stack_136->GetYaxis()->SetTitle("Events/0.2");
   st_stack_136->GetYaxis()->SetLabelFont(42);
   st_stack_136->GetYaxis()->SetTitleSize(0.037);
   st_stack_136->GetYaxis()->SetTitleFont(42);
   st_stack_136->GetZaxis()->SetLabelFont(42);
   st_stack_136->GetZaxis()->SetTitleOffset(1);
   st_stack_136->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_136);
   
   
   TH1D *VbbHcc_both_H_dR_all_stack_1 = new TH1D("VbbHcc_both_H_dR_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(2,23391.84);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(3,7317263);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(4,9553779);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(5,7814054);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(6,7797759);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(7,7975806);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(8,8635756);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(9,8992392);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(10,9458209);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(11,1.090054e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(12,1.203599e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(13,1.372507e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(14,1.624907e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(15,1.773191e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(16,1.971955e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(17,1.311364e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(18,9484937);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(19,8041551);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(20,6622839);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(21,4519000);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(22,3661059);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(23,2586067);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(24,1691100);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(25,1181951);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(26,749243.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(27,324760.4);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(28,72039.12);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(29,5348.276);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(2,18338.76);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(3,190182.6);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(4,268477.5);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(5,230502.1);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(6,245599.5);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(7,247085.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(8,256128);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(9,266692.5);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(10,260671.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(11,297365.1);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(12,308696.7);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(13,339425.2);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(14,370115.2);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(15,378653);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(16,417200.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(17,332879.5);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(18,275661.6);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(19,286410.1);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(20,249869.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(21,190978.2);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(22,180814.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(23,145545.1);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(24,115545.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(25,106096.2);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(26,112016.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(27,61743.52);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(28,18369.6);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(29,2080.405);
   VbbHcc_both_H_dR_all_stack_1->SetEntries(1763470);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_2 = new TH1D("VbbHcc_both_H_dR_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(2,174.6385);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(3,209708.9);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(4,374200.2);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(5,454725);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(6,545752.4);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(7,595815.9);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(8,613643.5);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(9,620831);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(10,633802.3);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(11,661413.8);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(12,704111);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(13,758046.7);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(14,818863.1);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(15,878137.7);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(16,868540.5);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(17,499925.8);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(18,321873.2);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(19,218192);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(20,149333.6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(21,101195.3);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(22,67147.69);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(23,43149.78);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(24,26198.14);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(25,14225.27);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(26,7022.155);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(27,2941.386);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(28,812.745);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(29,57.41651);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(2,5.242622);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(3,133.8425);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(4,177.6427);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(5,196.2425);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(6,214.4462);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(7,223.8038);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(8,228.196);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(9,229.1846);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(10,232.2351);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(11,237.217);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(12,244.7076);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(13,254.3641);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(14,264.68);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(15,274.3466);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(16,272.651);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(17,206.7134);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(18,165.5401);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(19,135.3138);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(20,111.3022);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(21,90.88737);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(22,74.16025);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(23,58.94964);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(24,45.8384);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(25,33.185);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(26,23.71249);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(27,14.9841);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(28,8.139185);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(29,2.037723);
   VbbHcc_both_H_dR_all_stack_2->SetEntries(1.41127e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_all->Modified();
   H_dR_both_all->cd();
   H_dR_both_all->SetSelected(H_dR_both_all);
}
