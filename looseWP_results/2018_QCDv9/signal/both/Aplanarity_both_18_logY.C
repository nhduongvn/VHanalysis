#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Fri Mar 10 11:27:15 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2183529,-0.541518,1.171633,1.902908);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15709);
   Aplanarity_both_18->SetRightMargin(0.1234783);
   Aplanarity_both_18->SetBottomMargin(0.12);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(34.81302);
   
   TH1F *st_stack_191 = new TH1F("st_stack_191","",50,0,1);
   st_stack_191->SetMinimum(0.5646939);
   st_stack_191->SetMaximum(45.54755);
   st_stack_191->SetDirectory(0);
   st_stack_191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_191->SetLineColor(ci);
   st_stack_191->GetXaxis()->SetTitle("Aplanarity");
   st_stack_191->GetXaxis()->SetRange(1,50);
   st_stack_191->GetXaxis()->SetLabelFont(42);
   st_stack_191->GetXaxis()->SetTitleOffset(1);
   st_stack_191->GetXaxis()->SetTitleFont(42);
   st_stack_191->GetYaxis()->SetTitle("Event/0.02");
   st_stack_191->GetYaxis()->SetLabelFont(42);
   st_stack_191->GetYaxis()->SetTitleSize(0.037);
   st_stack_191->GetYaxis()->SetTitleFont(42);
   st_stack_191->GetZaxis()->SetLabelFont(42);
   st_stack_191->GetZaxis()->SetTitleOffset(1);
   st_stack_191->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_191);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,20.73731);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,14.304);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,9.107899);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,6.051266);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,4.179861);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,2.997632);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,2.064581);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1.550069);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,1.133297);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.9622095);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.6335509);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,0.3996498);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.3121091);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.1665872);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,0.1378084);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.06548081);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,0.04360081);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,0.02594502);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,0.007918734);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,0.01496393);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,0.005586222);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(22,0.004416344);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.2533396);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.2060372);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.1641274);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.1329836);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.1101271);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.09365986);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.07654734);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.06657994);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.05913277);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.1155862);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.04162325);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,0.03324394);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.03058774);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.02126626);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,0.01885789);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.01300005);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,0.01069485);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,0.008265615);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,0.004588597);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,0.006751222);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,0.00398955);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(22,0.003134241);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(25742);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,8.157496);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,5.707266);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,3.708741);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,2.464374);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,1.619716);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,1.148775);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.768847);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.537999);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.3681062);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.2683748);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.186828);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.127691);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.07540148);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.04844213);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.03040308);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.02004483);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.01075523);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.005562806);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.003743393);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.001757269);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,0.0003365512);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,0.0004309483);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.05552825);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.0465478);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.03699157);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.03034129);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.02414414);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.02042414);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.01676951);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.01513878);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.01184403);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.01007189);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.008860271);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.01539459);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.005375947);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.004106526);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.003290645);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.002665307);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.001995032);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.001404682);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.001183644);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.0008017678);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,0.000252521);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,0.0004309483);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(74845);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
