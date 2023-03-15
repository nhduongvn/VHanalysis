#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Thu Mar  9 13:18:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.310117,-56498.25,7.029799,414320.5);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetFillStyle(4000);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_17->SetBottomMargin(0.12);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(367238.6);
   
   TH1F *st_stack_106 = new TH1F("st_stack_106","",30,0,6);
   st_stack_106->SetMinimum(0);
   st_stack_106->SetMaximum(367238.6);
   st_stack_106->SetDirectory(0);
   st_stack_106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_106->SetLineColor(ci);
   st_stack_106->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_106->GetXaxis()->SetRange(1,30);
   st_stack_106->GetXaxis()->SetLabelFont(42);
   st_stack_106->GetXaxis()->SetTitleOffset(1);
   st_stack_106->GetXaxis()->SetTitleFont(42);
   st_stack_106->GetYaxis()->SetTitle("Event/0.2");
   st_stack_106->GetYaxis()->SetLabelFont(42);
   st_stack_106->GetYaxis()->SetTitleSize(0.037);
   st_stack_106->GetYaxis()->SetTitleFont(42);
   st_stack_106->GetZaxis()->SetLabelFont(42);
   st_stack_106->GetZaxis()->SetTitleOffset(1);
   st_stack_106->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_106);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,95156.49);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,290859.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,250157.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,161195.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,100271);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,77176.72);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,33694.81);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,25280.16);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,14583.84);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,11286);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,6035.521);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,10173.99);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,6287.875);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,5144.973);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,6483.335);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,2198.058);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,465.1894);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,16116.18);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,46.43343);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,50.89758);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,25.07047);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,30.41094);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,21.36296);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,29.97199);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,251.1178);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(30,1188.975);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,4296.96);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,17850.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,23243.65);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,17066.12);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,16193.56);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,15868.56);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,4165.447);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,4096.033);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,2947.504);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,2164.273);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,1542.648);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,3010.488);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,2194.552);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,2135.923);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,2457.039);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,1267.945);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,258.9125);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,14658.02);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,30.43842);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,26.31479);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,21.68229);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,23.03658);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,21.36296);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,23.0324);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,251.1178);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(30,1188.975);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(25364);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,4204.971);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,13948.38);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,14101.49);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,10433.07);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,6717.61);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,4209.418);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,2670.716);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,1772.71);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,1196.317);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,820.3501);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,575.0355);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,401.4951);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,282.7642);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,198.2812);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,138.9178);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,97.97348);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,70.59683);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,47.68902);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,31.04892);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,24.11711);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,14.47807);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,10.07952);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,7.723694);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,4.868841);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,3.599314);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,2.37596);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,1.806032);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.7705032);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.5534089);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.4729811);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,1.172195);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,15.82239);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,28.9564);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,29.48426);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,25.56747);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,20.57991);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,16.29229);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,12.97028);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,10.56013);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,8.66287);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,7.152909);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,5.994241);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,5.003898);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,4.207103);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,3.51591);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,2.944446);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,2.464395);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,2.097434);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,1.720349);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,1.378891);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.22471);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.9525708);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.7927513);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.6967343);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.5539385);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.4726674);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.3803091);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.3382697);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.2187658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.189275);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.1803886);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.2744383);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(1058517);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
