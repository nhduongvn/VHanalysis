#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Wed Jan 18 11:42:52 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2183529,-1.229221,1.171633,11.30605);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetFillStyle(4000);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLogy();
   Aplanarity_tags_18->SetLeftMargin(0.15709);
   Aplanarity_tags_18->SetRightMargin(0.1234783);
   Aplanarity_tags_18->SetBottomMargin(0.12);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(4.143823e+09);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",50,0,1);
   st_stack_63->SetMinimum(1.8837);
   st_stack_63->SetMaximum(1.128562e+10);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetTitle("Aplanarity");
   st_stack_63->GetXaxis()->SetRange(1,50);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetTitleOffset(1);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Events/0.02");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetTitleSize(0.037);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetTitleOffset(1);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,4.010821e+07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,2.065532e+07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,1.032294e+07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,6151764);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,3454711);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,2221860);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,1595600);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,1021244);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,588098.1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,353400.1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,378404.5);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,187369.9);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,141317);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,103024.8);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,59493.61);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,41782.98);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,35287.22);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,4498.87);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,31854.52);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,2483.637);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(21,2500.159);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,578044.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,484690.2);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,333591.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,265881.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,188792.5);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,153959.3);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,137440.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,107184.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,78514.9);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,49296.49);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,72660.79);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,43566.18);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,35961.55);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,34385.29);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,24223.39);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,23815.56);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,23940.19);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,2655.491);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,29277.95);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,2026.775);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(21,2439.163);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(502767);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(0,0.3699989);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,1330020);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,936389.8);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,625687.5);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,430640.3);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,303131.6);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,216859.9);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,156683);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,113705.7);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,82477.68);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,59527.63);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,42886.8);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,30327.76);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,21268.74);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,14536.17);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,9760.622);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,6324.04);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,3963.894);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,2340.026);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,1297.261);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,651.9504);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,281.3558);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(22,109.8783);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(23,27.48679);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(24,4.641774);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(25,0.06372505);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(0,0.1800816);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,367.1387);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,307.7198);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,251.6268);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,209.4978);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,175.8061);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,148.8195);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,126.3139);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,107.661);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,91.45064);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,77.63963);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,66.1238);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,55.18167);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,47.09248);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,38.83868);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,31.98574);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,25.712);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,20.3432);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,15.73555);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,10.9922);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,8.073877);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,5.048909);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(22,3.169282);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(23,1.586795);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(24,0.6361069);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(25,0.06372505);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(5.371604e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
