#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_18 = new TCanvas("H_dR_algo_18", "H_dR_algo_18",0,0,600,600);
   H_dR_algo_18->SetHighLightColor(2);
   H_dR_algo_18->Range(-1.353788,-0.3051438,7.264125,6.353967);
   H_dR_algo_18->SetFillColor(0);
   H_dR_algo_18->SetFillStyle(4000);
   H_dR_algo_18->SetBorderMode(0);
   H_dR_algo_18->SetBorderSize(2);
   H_dR_algo_18->SetLogy();
   H_dR_algo_18->SetLeftMargin(0.15709);
   H_dR_algo_18->SetRightMargin(0.1234783);
   H_dR_algo_18->SetBottomMargin(0.12);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(258991);
   
   TH1F *st_stack_87 = new TH1F("st_stack_87","",30,0,6);
   st_stack_87->SetMinimum(3.118527);
   st_stack_87->SetMaximum(487591.2);
   st_stack_87->SetDirectory(0);
   st_stack_87->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_87->SetLineColor(ci);
   st_stack_87->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_87->GetXaxis()->SetRange(1,31);
   st_stack_87->GetXaxis()->SetLabelFont(42);
   st_stack_87->GetXaxis()->SetTitleOffset(1);
   st_stack_87->GetXaxis()->SetTitleFont(42);
   st_stack_87->GetYaxis()->SetTitle("Event/0.2");
   st_stack_87->GetYaxis()->SetLabelFont(42);
   st_stack_87->GetYaxis()->SetTitleSize(0.037);
   st_stack_87->GetYaxis()->SetTitleFont(42);
   st_stack_87->GetZaxis()->SetLabelFont(42);
   st_stack_87->GetZaxis()->SetTitleOffset(1);
   st_stack_87->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_87);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,82903.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,106135.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,73073.03);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,73336.56);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,89378.67);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,74395.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,122723.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,130715.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,96866.83);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,97697.24);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,104102.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,207924);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,137719);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,96143.67);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,62912.88);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,55235.05);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,25896.96);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,15265.94);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,5601.86);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,5809.691);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,4182.069);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,613.3156);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,139.3151);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,48.15812);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,60.6385);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,5.395837);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,7793.949);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,9751.064);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,8293.067);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,7181.216);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,9782.303);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,8062.593);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,30007.77);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,33620.72);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,9155.262);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,8338.91);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,9360.349);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,50480.53);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,26629.38);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,8276.719);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,6380.218);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,6764.205);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,4540.239);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,3517);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,1315.215);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,2404.308);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,2005.073);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,369.9295);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,59.94849);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,20.46049);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,39.63969);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,5.395837);
   VbbHcc_algo_H_dR_stack_1->SetEntries(24627);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.9819893);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,2100.911);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,4140.868);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,5088.356);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,5795.703);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,6069.8);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,6101.188);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,6271.007);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,6506.721);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,6860.204);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,7151.549);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,7259.363);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,7038.548);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,6654.869);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,6087.671);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,3644.818);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,2223.925);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,1358.671);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,786.4361);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,432.0347);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,223.8378);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,118.258);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,55.48669);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,20.37096);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,6.780916);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,1.87689);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.1533648);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.2677425);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,13.37341);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,18.16958);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,20.00299);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,21.45707);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,22.12364);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,22.44835);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,22.6258);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,23.47016);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,23.79116);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,24.16751);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,24.1823);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,24.21526);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,22.93207);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,21.73528);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,17.26683);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,13.56671);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,11.3271);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,7.675582);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,6.052031);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,4.002924);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,2.940203);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,2.177965);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,1.361767);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,0.6874702);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.3652912);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.08998814);
   VbbHcc_algo_H_dR_stack_2->SetEntries(1407385);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_18->Modified();
   H_dR_algo_18->cd();
   H_dR_algo_18->SetSelected(H_dR_algo_18);
}
