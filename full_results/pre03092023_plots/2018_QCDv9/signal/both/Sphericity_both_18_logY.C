#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2183529,-0.1180199,1.171633,0.8654794);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetFillStyle(4000);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15709);
   Sphericity_both_18->SetRightMargin(0.1234783);
   Sphericity_both_18->SetBottomMargin(0.12);
   Sphericity_both_18->SetFrameFillStyle(1000);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameFillStyle(1000);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_187 = new TH1F("st_stack_187","",25,0,1);
   st_stack_187->SetMinimum(-2.458114e+09);
   st_stack_187->SetMaximum(-0.7505186);
   st_stack_187->SetDirectory(0);
   st_stack_187->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_187->SetLineColor(ci);
   st_stack_187->GetXaxis()->SetTitle("Sphericity");
   st_stack_187->GetXaxis()->SetRange(1,25);
   st_stack_187->GetXaxis()->SetLabelFont(42);
   st_stack_187->GetXaxis()->SetTitleOffset(1);
   st_stack_187->GetXaxis()->SetTitleFont(42);
   st_stack_187->GetYaxis()->SetTitle("Event/0.04");
   st_stack_187->GetYaxis()->SetLabelFont(42);
   st_stack_187->GetYaxis()->SetTitleSize(0.037);
   st_stack_187->GetYaxis()->SetTitleFont(42);
   st_stack_187->GetZaxis()->SetLabelFont(42);
   st_stack_187->GetZaxis()->SetTitleOffset(1);
   st_stack_187->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_187);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,0.07167102);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,0.2264412);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,0.4193201);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,0.5380822);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,0.4678527);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,0.4684394);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,0.4421847);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,0.4109171);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,0.4301614);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,0.3826607);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,0.285912);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,0.2921639);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,0.2978672);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,0.2364395);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,0.2331105);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,0.1741585);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,0.09928821);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,0.07512684);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,0.05027175);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,0.03616239);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,0.01287348);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,0.007120521);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(24,0.001556614);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,0.01162762);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,0.02067058);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,0.03008525);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,0.04185863);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,0.03042319);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,0.03011798);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,0.03220439);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,0.03369526);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,0.02967339);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,0.03027821);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,0.0236716);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,0.02336491);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,0.02426761);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,0.02520352);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,0.02101895);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,0.01793855);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,0.01445635);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,0.0116296);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,0.009553866);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,0.008204978);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,0.004941389);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,0.003257248);
   VbbHcc_both_Sphericity_stack_1->SetBinError(24,0.001556614);
   VbbHcc_both_Sphericity_stack_1->SetEntries(3234);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,0.03142205);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,0.1214488);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,0.1764983);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,0.1925172);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,0.1900994);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,0.1974406);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,0.1980234);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,0.1908113);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,0.1783679);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,0.1598703);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,0.1494682);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,0.1356477);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,0.1220803);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,0.1071593);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,0.09251005);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,0.07285046);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,0.05900132);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,0.04077192);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,0.02178355);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.01098128);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.00380611);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.0007045857);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,0.002754203);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,0.005589737);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,0.006737236);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,0.007521488);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,0.006939358);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,0.007364483);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,0.007115272);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,0.007134831);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,0.006648307);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,0.00651625);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,0.006553537);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,0.005781156);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,0.006022483);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,0.005170647);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,0.005246461);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,0.004445323);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.003817296);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.004752991);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.002316851);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.001619331);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.0009804971);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.0005024644);
   VbbHcc_both_Sphericity_stack_2->SetEntries(10352);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
