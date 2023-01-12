#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Mon Dec 19 11:15:37 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.310117,-1.008595,7.029799,10.06776);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetFillStyle(4000);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLogy();
   Z_dR_tags_16->SetLeftMargin(0.15709);
   Z_dR_tags_16->SetRightMargin(0.1234783);
   Z_dR_tags_16->SetBottomMargin(0.12);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.631611e+08);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",30,0,6);
   st_stack_17->SetMinimum(2.092028);
   st_stack_17->SetMaximum(9.122679e+08);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_17->GetXaxis()->SetRange(1,30);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetTitleOffset(1);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/0.2");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetTitleSize(0.037);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetTitleOffset(1);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,1167.855);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,2828562);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,3572201);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,2733985);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,2359997);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,2123526);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,2008750);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,2034546);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,2128280);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,2178521);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,2382162);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,2418301);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,2960574);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,3301814);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,3395546);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,2192284);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,1442074);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,928654.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,557750.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,569749.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,331639.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,245578.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,152934.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,64352.69);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,44556.01);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,6742.165);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,1070.362);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,237.9796);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,481.1381);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,89386.76);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,116347.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,115880.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,102671.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,104315.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,106332.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,110252.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,119665.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,122859.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,132218.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,123683.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,152266.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,156448.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,159955.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,133752.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,112612.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,83178.78);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,58176.08);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,72348.61);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,56455.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,47214.86);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,33341.01);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,20854.65);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,19475.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,2353.333);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,623.9326);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,237.6175);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(514605);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,23.50336);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,30500.78);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,59410.25);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,71406.99);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,87284.82);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,102042.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,115982.7);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,129695.7);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,144190.8);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,159294.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,175831.4);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,193525.2);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,210883.8);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,226371.4);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,222054.4);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,116174.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,65977.2);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,38823.05);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,22760);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,13064.29);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,7304.977);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,3890.439);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,1982.496);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,918.0369);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,381.9607);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,128.6009);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,31.07381);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,1.129803);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,1.370896);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,49.45927);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,69.1635);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,75.92082);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,83.97799);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,90.82263);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,96.84303);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,102.423);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,108.0226);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,113.5701);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,119.3844);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,125.3223);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,130.9357);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,135.7534);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,134.5659);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,97.32946);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,73.32929);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,56.22868);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,43.01787);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,32.57081);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,24.29043);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,17.68699);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,12.56782);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,8.534156);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,5.490263);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,3.16749);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,1.542856);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.2871224);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(2.979302e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}
