#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_16_logY()
{
//=========Macro generated from canvas: nB_medium_jets_all_16/nB_medium_jets_all_16
//=========  (Mon Dec 19 11:03:35 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_16 = new TCanvas("nB_medium_jets_all_16", "nB_medium_jets_all_16",0,0,600,600);
   nB_medium_jets_all_16->SetHighLightColor(2);
   nB_medium_jets_all_16->Range(-2.683529,-0.1007736,11.21633,5.359575);
   nB_medium_jets_all_16->SetFillColor(0);
   nB_medium_jets_all_16->SetFillStyle(4000);
   nB_medium_jets_all_16->SetBorderMode(0);
   nB_medium_jets_all_16->SetBorderSize(2);
   nB_medium_jets_all_16->SetLogy();
   nB_medium_jets_all_16->SetLeftMargin(0.15709);
   nB_medium_jets_all_16->SetRightMargin(0.1234783);
   nB_medium_jets_all_16->SetBottomMargin(0.12);
   nB_medium_jets_all_16->SetFrameFillStyle(1000);
   nB_medium_jets_all_16->SetFrameBorderMode(0);
   nB_medium_jets_all_16->SetFrameFillStyle(1000);
   nB_medium_jets_all_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(37937.59);
   
   TH1F *st_stack_121 = new TH1F("st_stack_121","",10,-0.5,9.5);
   st_stack_121->SetMinimum(3.584827);
   st_stack_121->SetMaximum(65093.84);
   st_stack_121->SetDirectory(0);
   st_stack_121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_121->SetLineColor(ci);
   st_stack_121->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_121->GetXaxis()->SetRange(1,10);
   st_stack_121->GetXaxis()->SetLabelFont(42);
   st_stack_121->GetXaxis()->SetTitleOffset(1);
   st_stack_121->GetXaxis()->SetTitleFont(42);
   st_stack_121->GetYaxis()->SetTitle("Events/1.0");
   st_stack_121->GetYaxis()->SetLabelFont(42);
   st_stack_121->GetYaxis()->SetTitleSize(0.037);
   st_stack_121->GetYaxis()->SetTitleFont(42);
   st_stack_121->GetZaxis()->SetLabelFont(42);
   st_stack_121->GetZaxis()->SetTitleOffset(1);
   st_stack_121->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_121);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,338.5762);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,194.4816);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,73.67601);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,17.97467);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,2.419875);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,0.2321652);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,0.01343043);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(8,0.00307456);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,0.7428183);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,0.5582274);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,0.3425213);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,0.1683566);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,0.06138217);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,0.01878609);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,0.004536208);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(8,0.002174351);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(472445);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,40.79967);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,28.16418);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,13.40643);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,3.830715);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,0.5705139);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,0.06832484);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,0.006728769);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,0.001163988);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(9,0.0001892237);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(10,0.0002048819);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,0.08795382);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,0.07302238);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,0.05042589);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,0.02694501);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,0.01038603);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,0.00358509);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,0.001127736);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,0.0004754812);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(9,0.0001892237);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(10,0.0002048819);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(492720);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_all_16->Modified();
   nB_medium_jets_all_16->cd();
   nB_medium_jets_all_16->SetSelected(nB_medium_jets_all_16);
}
