#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_17/Z_dR_Bj0_both_17
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_17 = new TCanvas("Z_dR_Bj0_both_17", "Z_dR_Bj0_both_17",0,0,600,600);
   Z_dR_Bj0_both_17->SetHighLightColor(2);
   Z_dR_Bj0_both_17->Range(-1.310117,-3.450056,7.029799,0.3960978);
   Z_dR_Bj0_both_17->SetFillColor(0);
   Z_dR_Bj0_both_17->SetFillStyle(4000);
   Z_dR_Bj0_both_17->SetBorderMode(0);
   Z_dR_Bj0_both_17->SetBorderSize(2);
   Z_dR_Bj0_both_17->SetLogy();
   Z_dR_Bj0_both_17->SetLeftMargin(0.15709);
   Z_dR_Bj0_both_17->SetRightMargin(0.1234783);
   Z_dR_Bj0_both_17->SetBottomMargin(0.12);
   Z_dR_Bj0_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
   Z_dR_Bj0_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_178 = new TH1F("st_stack_178","",30,0,6);
   st_stack_178->SetMinimum(18.21673);
   st_stack_178->SetMaximum(1.026792);
   st_stack_178->SetDirectory(0);
   st_stack_178->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_178->SetLineColor(ci);
   st_stack_178->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_178->GetXaxis()->SetRange(1,30);
   st_stack_178->GetXaxis()->SetLabelFont(42);
   st_stack_178->GetXaxis()->SetTitleOffset(1);
   st_stack_178->GetXaxis()->SetTitleFont(42);
   st_stack_178->GetYaxis()->SetTitle("Event/0.2");
   st_stack_178->GetYaxis()->SetLabelFont(42);
   st_stack_178->GetYaxis()->SetTitleSize(0.037);
   st_stack_178->GetYaxis()->SetTitleFont(42);
   st_stack_178->GetZaxis()->SetLabelFont(42);
   st_stack_178->GetZaxis()->SetTitleOffset(1);
   st_stack_178->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_178);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,0.2172197);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,0.8688788);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,0.8499417);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,0.652773);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,0.3263865);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,0.1793455);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,0.1715479);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,0.0991413);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,0.1002552);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,0.07574841);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,0.07240656);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,0.06795078);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,0.05458341);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,0.04455789);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,0.04789973);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,0.0378742);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,0.02227894);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,0.02227894);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,0.01002552);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,0.02005105);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,0.001113947);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,0.001113947);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,0.001113947);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(27,0.001113947);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,0.01555543);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,0.03111085);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,0.03076995);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,0.02696581);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,0.0190677);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,0.0141344);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,0.01382372);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,0.01050896);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,0.01056783);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,0.009185843);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,0.008980929);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,0.008700205);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,0.00779763);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,0.00704522);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,0.00730464);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,0.006495372);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,0.004981723);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,0.004981723);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,0.003341841);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,0.004726077);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,0.001113947);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,0.001113947);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,0.001113947);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(27,0.001113947);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(3542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,0.08956309);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,0.378887);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,0.4028876);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,0.2578597);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,0.1248322);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,0.06936749);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,0.050489);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,0.04580596);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,0.03424471);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,0.03365933);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,0.02941533);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,0.02356153);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,0.02180539);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,0.02429326);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,0.01668332);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,0.02048829);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,0.01112221);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,0.005268417);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,0.004244003);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,0.002926898);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,0.001609794);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,0.001317104);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,0.0005853797);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,0.0004390348);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,0.0001463449);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,0.0001463449);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,0.003620373);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,0.007446354);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,0.007678577);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,0.006143001);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,0.004274174);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,0.003186154);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,0.002718236);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,0.002589106);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,0.002238647);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,0.002219431);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,0.002074797);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,0.001856909);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,0.001786367);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,0.001885522);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,0.001562536);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,0.001731576);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,0.001275805);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,0.0008780695);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.0007880915);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,0.0006544744);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.0004853712);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,0.0004390348);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,0.0002926898);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.0002534768);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.0001463449);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.0001463449);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(11286);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","ZHcc","F");

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
   Z_dR_Bj0_both_17->Modified();
   Z_dR_Bj0_both_17->cd();
   Z_dR_Bj0_both_17->SetSelected(Z_dR_Bj0_both_17);
}
