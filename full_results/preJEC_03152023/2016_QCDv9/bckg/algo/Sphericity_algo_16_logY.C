#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2183529,-0.2630537,1.171633,6.145552);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetFillStyle(4000);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15709);
   Sphericity_algo_16->SetRightMargin(0.1234783);
   Sphericity_algo_16->SetBottomMargin(0.12);
   Sphericity_algo_16->SetFrameFillStyle(1000);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameFillStyle(1000);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(173013.5);
   
   TH1F *st_stack_121 = new TH1F("st_stack_121","",25,0,1);
   st_stack_121->SetMinimum(3.206115);
   st_stack_121->SetMaximum(319662.5);
   st_stack_121->SetDirectory(0);
   st_stack_121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_121->SetLineColor(ci);
   st_stack_121->GetXaxis()->SetTitle("Sphericity");
   st_stack_121->GetXaxis()->SetRange(1,25);
   st_stack_121->GetXaxis()->SetLabelFont(42);
   st_stack_121->GetXaxis()->SetTitleOffset(1);
   st_stack_121->GetXaxis()->SetTitleFont(42);
   st_stack_121->GetYaxis()->SetTitle("Event/0.04");
   st_stack_121->GetYaxis()->SetLabelFont(42);
   st_stack_121->GetYaxis()->SetTitleSize(0.037);
   st_stack_121->GetYaxis()->SetTitleFont(42);
   st_stack_121->GetZaxis()->SetLabelFont(42);
   st_stack_121->GetZaxis()->SetTitleOffset(1);
   st_stack_121->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_121);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,47749.18);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,140126.5);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,128696.1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,96736.82);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,69969.44);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,62637.8);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,49537.12);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,69797.63);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,37260.03);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,29457.42);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,32865.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,26457.77);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,18789.03);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,9906.508);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,11581.96);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,8280.524);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,3651.143);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,4925.065);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,2768.439);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,474.6069);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(21,633.0473);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(22,3.261224);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,4094.797);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,20946.01);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,8830.708);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,7701.486);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,6192.866);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,5874.67);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,5527.115);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,23068.15);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,4745.375);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,3798.259);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,4650.226);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,4689.625);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,3722.14);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,2405.874);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,2154.166);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,1913.063);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,833.8909);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,1040.895);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,1568.168);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,338.8522);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(21,438.0058);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(22,3.261224);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(22714);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,1199.938);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,3474.705);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,4312.457);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,4264.436);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,3996.864);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,3660.046);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,3339.266);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,3027.952);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,2759.892);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,2508.402);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,2301.915);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,2066.09);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,1875.554);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,1667.124);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,1435.996);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,1233.582);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,1006.68);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,748.5269);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,508.9277);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,272.7251);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,118.4169);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(22,44.83685);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(23,11.29832);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(24,2.060484);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(25,0.1059421);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,8.515397);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,14.81335);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,16.76605);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,16.78767);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,16.33216);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,15.65512);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,14.98791);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,14.2997);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,13.66072);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,13.03993);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,12.5085);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,11.85926);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,11.32338);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,10.6821);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,9.91539);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,9.199141);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,8.334434);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,7.192965);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,5.928153);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,4.370869);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,2.881497);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(22,1.774538);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(23,0.8860852);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(24,0.3794624);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(25,0.07497821);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(736178);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
