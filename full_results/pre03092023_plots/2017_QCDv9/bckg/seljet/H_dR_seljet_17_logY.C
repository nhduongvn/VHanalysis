#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_17_logY()
{
//=========Macro generated from canvas: H_dR_seljet_17/H_dR_seljet_17
//=========  (Thu Feb 16 10:37:42 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_17 = new TCanvas("H_dR_seljet_17", "H_dR_seljet_17",0,0,600,600);
   H_dR_seljet_17->SetHighLightColor(2);
   H_dR_seljet_17->Range(-1.353788,-0.8286488,7.264125,12.45692);
   H_dR_seljet_17->SetFillColor(0);
   H_dR_seljet_17->SetFillStyle(4000);
   H_dR_seljet_17->SetBorderMode(0);
   H_dR_seljet_17->SetBorderSize(2);
   H_dR_seljet_17->SetLogy();
   H_dR_seljet_17->SetLeftMargin(0.15709);
   H_dR_seljet_17->SetRightMargin(0.1234783);
   H_dR_seljet_17->SetBottomMargin(0.12);
   H_dR_seljet_17->SetFrameFillStyle(1000);
   H_dR_seljet_17->SetFrameBorderMode(0);
   H_dR_seljet_17->SetFrameFillStyle(1000);
   H_dR_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(32.53867);
   st->SetMaximum(4.744107e+10);
   
   TH1F *st_stack_278 = new TH1F("st_stack_278","",30,0,6);
   st_stack_278->SetMinimum(5.829341);
   st_stack_278->SetMaximum(1.343887e+11);
   st_stack_278->SetDirectory(0);
   st_stack_278->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_278->SetLineColor(ci);
   st_stack_278->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_278->GetXaxis()->SetRange(1,31);
   st_stack_278->GetXaxis()->SetLabelFont(42);
   st_stack_278->GetXaxis()->SetTitleOffset(1);
   st_stack_278->GetXaxis()->SetTitleFont(42);
   st_stack_278->GetYaxis()->SetTitle("Events/0.2");
   st_stack_278->GetYaxis()->SetLabelFont(42);
   st_stack_278->GetYaxis()->SetTitleSize(0.037);
   st_stack_278->GetYaxis()->SetTitleFont(42);
   st_stack_278->GetZaxis()->SetLabelFont(42);
   st_stack_278->GetZaxis()->SetTitleOffset(1);
   st_stack_278->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_278);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,32464.38);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,2.425274e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,3.223067e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,2.849749e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,2.943966e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,3.317189e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,4.056151e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,5.324642e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,7.083644e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,9.734125e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,1.40138e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,2.006057e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,2.86429e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,3.957714e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,4.725701e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,2.95619e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,2.049518e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,1.481407e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,1.068134e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,7.652226e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,5.303263e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,3.522306e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,2.23045e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,1.356479e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,6547635);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,2769232);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,720611.2);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(29,44651.68);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,4973.79);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,235506.8);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,284012.7);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,294130.3);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,290382.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,287887.7);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,307950.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,370473.8);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,384774.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,422626.7);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,490002.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,568410.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,663745.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,783295.7);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,869000.2);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,680945.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,583421.5);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,502203.8);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,426751.3);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,373721.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,310998.6);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,249751.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,202884.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,172616.5);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,111881.8);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,81567.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,34787.49);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(29,5652.428);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(4.293574e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_stack_2 = new TH1D("VbbHcc_seljet_H_dR_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,74.28951);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,92128.55);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,206618.9);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,261287.4);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,283446.4);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,291923.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,308647.5);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,348962.9);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,424721.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,547492.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,730160.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,983442.7);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,1305848);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,1670709);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,1840615);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,962241.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,553288.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,337327.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,207343);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,126403.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,75927.12);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,44148.19);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,24394.51);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,12442.85);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,5572.782);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,2042.526);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,478.6858);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(29,26.19567);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,2.292735);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,81.54028);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,123.1601);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,139.045);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,145.0948);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,147.3983);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,151.7045);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,161.4168);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,178.2127);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,202.588);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,234.3464);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,272.5013);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,314.6765);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,356.704);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,374.9769);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,270.4522);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,204.3747);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,158.9636);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,124.0589);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,96.35794);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,74.22128);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,56.19118);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,41.46279);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,29.32592);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,19.38692);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,11.54681);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,5.440989);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(29,1.232122);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(1.694272e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_seljet_17->Modified();
   H_dR_seljet_17->cd();
   H_dR_seljet_17->SetSelected(H_dR_seljet_17);
}
