#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_all_logY()
{
//=========Macro generated from canvas: Sphericity_both_all/Sphericity_both_all
//=========  (Thu Mar  9 13:08:27 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_all = new TCanvas("Sphericity_both_all", "Sphericity_both_all",0,0,600,600);
   Sphericity_both_all->SetHighLightColor(2);
   Sphericity_both_all->Range(-0.2183529,-0.1697825,1.171633,0.5381563);
   Sphericity_both_all->SetFillColor(0);
   Sphericity_both_all->SetFillStyle(4000);
   Sphericity_both_all->SetBorderMode(0);
   Sphericity_both_all->SetBorderSize(2);
   Sphericity_both_all->SetLogy();
   Sphericity_both_all->SetLeftMargin(0.15709);
   Sphericity_both_all->SetRightMargin(0.1234783);
   Sphericity_both_all->SetBottomMargin(0.12);
   Sphericity_both_all->SetFrameFillStyle(1000);
   Sphericity_both_all->SetFrameBorderMode(0);
   Sphericity_both_all->SetFrameFillStyle(1000);
   Sphericity_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(2.700344);
   
   TH1F *st_stack_188 = new TH1F("st_stack_188","",25,0,1);
   st_stack_188->SetMinimum(0.8225649);
   st_stack_188->SetMaximum(2.93334);
   st_stack_188->SetDirectory(0);
   st_stack_188->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_188->SetLineColor(ci);
   st_stack_188->GetXaxis()->SetTitle("Sphericity");
   st_stack_188->GetXaxis()->SetRange(1,25);
   st_stack_188->GetXaxis()->SetLabelFont(42);
   st_stack_188->GetXaxis()->SetTitleOffset(1);
   st_stack_188->GetXaxis()->SetTitleFont(42);
   st_stack_188->GetYaxis()->SetTitle("Event/0.04");
   st_stack_188->GetYaxis()->SetLabelFont(42);
   st_stack_188->GetYaxis()->SetTitleSize(0.037);
   st_stack_188->GetYaxis()->SetTitleFont(42);
   st_stack_188->GetZaxis()->SetLabelFont(42);
   st_stack_188->GetZaxis()->SetTitleOffset(1);
   st_stack_188->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_188);
   
   
   TH1D *VbbHcc_both_Sphericity_all_stack_1 = new TH1D("VbbHcc_both_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(1,0.2087996);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(2,0.7384799);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(3,1.355453);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(4,1.611181);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(5,1.583689);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(6,1.529335);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(7,1.451738);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(8,1.282005);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(9,1.245239);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(10,1.176387);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(11,1.012671);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(12,0.8902453);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(13,0.90443);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(14,0.7808174);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(15,0.7337648);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(16,0.545257);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(17,0.4057979);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(18,0.2980819);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(19,0.2072509);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(20,0.1110851);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(21,0.03528179);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(22,0.01736344);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(24,0.002231337);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(1,0.02222738);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(2,0.04240839);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(3,0.0594268);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(4,0.0745353);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(5,0.06323422);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(6,0.06221844);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(7,0.06355166);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(8,0.06273777);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(9,0.05700461);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(10,0.05756323);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(11,0.05067839);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(12,0.04687048);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(13,0.04819451);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(14,0.04858174);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(15,0.04304534);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(16,0.03717035);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(17,0.03251046);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(18,0.02697838);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(19,0.02247625);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(20,0.01654564);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(21,0.009062541);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(22,0.006270023);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(24,0.002231337);
   VbbHcc_both_Sphericity_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_2 = new TH1D("VbbHcc_both_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(1,0.1053997);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(2,0.3690918);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(3,0.5523057);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(4,0.6301048);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(5,0.6162875);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(6,0.6264598);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(7,0.6298303);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(8,0.6204059);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(9,0.5903574);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(10,0.5119661);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(11,0.4719357);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(12,0.4107386);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(13,0.3750703);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(14,0.3283389);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(15,0.2738415);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(16,0.2208234);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(17,0.1809542);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(18,0.1354952);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(19,0.06959356);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(20,0.03407441);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(21,0.0120922);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(22,0.0007625233);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(23,0.001607136);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(1,0.005713557);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(2,0.01095979);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(3,0.01346142);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(4,0.01481284);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(5,0.01414282);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(6,0.01457251);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(7,0.01437);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(8,0.01443186);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(9,0.01378381);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(10,0.01310719);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(11,0.01286593);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(12,0.01153721);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(13,0.01162561);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(14,0.01025575);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(15,0.009916046);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(16,0.00869094);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(17,0.007609103);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(18,0.008365904);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(19,0.004696201);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(20,0.003330998);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(21,0.001972557);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(22,0.0004406675);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(23,0.0008021071);
   VbbHcc_both_Sphericity_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_all->Modified();
   Sphericity_both_all->cd();
   Sphericity_both_all->SetSelected(Sphericity_both_all);
}
