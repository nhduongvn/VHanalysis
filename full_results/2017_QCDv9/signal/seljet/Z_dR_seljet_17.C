#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_17()
{
//=========Macro generated from canvas: Z_dR_seljet_17/Z_dR_seljet_17
//=========  (Mon Dec 19 11:11:24 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_17 = new TCanvas("Z_dR_seljet_17", "Z_dR_seljet_17",0,0,600,600);
   Z_dR_seljet_17->SetHighLightColor(2);
   Z_dR_seljet_17->Range(-1.310117,-6.934307,7.029799,50.85158);
   Z_dR_seljet_17->SetFillColor(0);
   Z_dR_seljet_17->SetFillStyle(4000);
   Z_dR_seljet_17->SetBorderMode(0);
   Z_dR_seljet_17->SetBorderSize(2);
   Z_dR_seljet_17->SetLeftMargin(0.15709);
   Z_dR_seljet_17->SetRightMargin(0.1234783);
   Z_dR_seljet_17->SetBottomMargin(0.12);
   Z_dR_seljet_17->SetFrameFillStyle(1000);
   Z_dR_seljet_17->SetFrameBorderMode(0);
   Z_dR_seljet_17->SetFrameFillStyle(1000);
   Z_dR_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(45.07299);
   
   TH1F *st_stack_242 = new TH1F("st_stack_242","",30,0,6);
   st_stack_242->SetMinimum(0);
   st_stack_242->SetMaximum(45.07299);
   st_stack_242->SetDirectory(0);
   st_stack_242->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_242->SetLineColor(ci);
   st_stack_242->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_242->GetXaxis()->SetRange(1,30);
   st_stack_242->GetXaxis()->SetLabelFont(42);
   st_stack_242->GetXaxis()->SetTitleOffset(1);
   st_stack_242->GetXaxis()->SetTitleFont(42);
   st_stack_242->GetYaxis()->SetTitle("Events/0.2");
   st_stack_242->GetYaxis()->SetLabelFont(42);
   st_stack_242->GetYaxis()->SetTitleSize(0.037);
   st_stack_242->GetYaxis()->SetTitleFont(42);
   st_stack_242->GetZaxis()->SetLabelFont(42);
   st_stack_242->GetZaxis()->SetTitleOffset(1);
   st_stack_242->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_242);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,0.004851627);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,5.34512);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,9.595931);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,10.29898);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,12.03608);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,13.39291);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,14.80608);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,16.27024);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,17.08136);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,18.63647);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,19.24807);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,20.57541);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,22.2471);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,24.09701);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,22.9892);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,10.89821);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,5.975372);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,3.523563);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,2.274342);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,1.540204);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,0.9903502);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,0.6329837);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,0.3888037);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,0.1909501);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,0.1033696);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,0.05064295);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,0.01266902);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,0.001136763);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,0.002847978);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,0.09811375);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,0.1311093);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,0.1367065);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,0.1476457);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,0.156053);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,0.1633371);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,0.1713164);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,0.1761714);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,0.1834799);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,0.1867036);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,0.1930127);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,0.2011829);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,0.2091823);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,0.2045141);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,0.1403522);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,0.1033143);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,0.07903647);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,0.06325585);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,0.05206398);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,0.04157667);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,0.03329503);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,0.02555564);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,0.01805748);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,0.01308744);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,0.00904127);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,0.004901419);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,0.001136763);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(167881);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,0.0007564723);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,1.137907);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,2.117201);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,2.451727);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,2.977681);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,3.370216);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,3.704116);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,3.935905);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,4.258904);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,4.591642);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,4.923044);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,5.283845);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,5.588766);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,5.951654);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,5.858726);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,3.08893);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,1.783757);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,1.186871);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,0.7479567);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,0.4898623);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,0.2960143);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,0.1906948);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,0.1122938);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,0.05806163);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,0.03271121);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,0.01125844);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,0.00272983);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,0.0003789627);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,0.00043373);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,0.01668386);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,0.02270966);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,0.02442679);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,0.02692043);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,0.02864776);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,0.03007768);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,0.03100625);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,0.03225095);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,0.03348263);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,0.03468674);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,0.03592471);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,0.0369641);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,0.03815719);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,0.03793283);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,0.02746341);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,0.02084522);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,0.01699184);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,0.0134392);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,0.01089156);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,0.008425489);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,0.006700436);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,0.005167973);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,0.003673271);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,0.002780008);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,0.001628069);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,0.0007733217);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,0.0002692991);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(299433);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   Z_dR_seljet_17->Modified();
   Z_dR_seljet_17->cd();
   Z_dR_seljet_17->SetSelected(Z_dR_seljet_17);
}
