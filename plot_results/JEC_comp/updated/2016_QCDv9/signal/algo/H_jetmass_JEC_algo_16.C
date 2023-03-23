#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_algo_16()
{
//=========Macro generated from canvas: H_jetmass_JEC_algo_16/H_jetmass_JEC_algo_16
//=========  (Thu Mar 23 11:25:14 2023) by ROOT version 6.26/06
   TCanvas *H_jetmass_JEC_algo_16 = new TCanvas("H_jetmass_JEC_algo_16", "H_jetmass_JEC_algo_16",0,0,600,600);
   H_jetmass_JEC_algo_16->SetHighLightColor(2);
   H_jetmass_JEC_algo_16->Range(-65.50587,-0.01416915,351.4899,0.1039071);
   H_jetmass_JEC_algo_16->SetFillColor(0);
   H_jetmass_JEC_algo_16->SetFillStyle(4000);
   H_jetmass_JEC_algo_16->SetBorderMode(0);
   H_jetmass_JEC_algo_16->SetBorderSize(2);
   H_jetmass_JEC_algo_16->SetLeftMargin(0.15709);
   H_jetmass_JEC_algo_16->SetRightMargin(0.1234783);
   H_jetmass_JEC_algo_16->SetBottomMargin(0.12);
   H_jetmass_JEC_algo_16->SetFrameFillStyle(1000);
   H_jetmass_JEC_algo_16->SetFrameBorderMode(0);
   H_jetmass_JEC_algo_16->SetFrameFillStyle(1000);
   H_jetmass_JEC_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.09209949);
   
   TH1F *st_stack_173 = new TH1F("st_stack_173","",150,0,300);
   st_stack_173->SetMinimum(0);
   st_stack_173->SetMaximum(0.09209949);
   st_stack_173->SetDirectory(0);
   st_stack_173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_173->SetLineColor(ci);
   st_stack_173->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   st_stack_173->GetXaxis()->SetRange(1,150);
   st_stack_173->GetXaxis()->SetLabelFont(42);
   st_stack_173->GetXaxis()->SetTitleOffset(1);
   st_stack_173->GetXaxis()->SetTitleFont(42);
   st_stack_173->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_173->GetYaxis()->SetLabelFont(42);
   st_stack_173->GetYaxis()->SetTitleSize(0.037);
   st_stack_173->GetYaxis()->SetTitleFont(42);
   st_stack_173->GetZaxis()->SetLabelFont(42);
   st_stack_173->GetZaxis()->SetTitleOffset(1);
   st_stack_173->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_173);
   
   
   TH1D *VbbHcc_algo_H_jetmass_JEC_stack_1 = new TH1D("VbbHcc_algo_H_jetmass_JEC_stack_1","",150,0,300);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(3,0.005926268);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(4,0.0181302);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(5,0.02330127);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(6,0.04061186);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(7,0.06345468);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(8,0.05209885);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(9,0.0402087);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(10,0.02708091);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(11,0.01176587);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(12,0.01161508);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(13,0.008797382);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(14,0.02479351);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(15,0.008546826);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(16,0.0004440092);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(17,0.008718675);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(19,0.006051595);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(20,0.008082695);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(22,0.00296763);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(3,0.004215393);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(4,0.007413233);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(5,0.00827925);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(6,0.01108604);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(7,0.01359224);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(8,0.0123726);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(9,0.01079633);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(10,0.009048055);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(11,0.005901758);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(12,0.005808894);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(13,0.005081305);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(14,0.00842639);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(15,0.004934942);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(16,0.0004440092);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(17,0.005033891);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(19,0.004289632);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(20,0.004714467);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(22,0.00296763);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetEntries(126);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_jetmass_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_H_jetmass_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_jetmass_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_jetmass_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_jetmass_JEC_stack_1,"");
   
   TH1D *VbbHcc_algo_H_jetmass_JEC_stack_2 = new TH1D("VbbHcc_algo_H_jetmass_JEC_stack_2","",150,0,300);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(4,0.003366162);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(5,0.007272311);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(6,0.009445114);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(7,0.0129879);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(8,0.0237021);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(9,0.01330041);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(10,0.01288995);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(11,0.008869032);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(12,0.003850103);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(13,0.004324754);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(14,0.003679167);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(15,0.001062902);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(16,0.003137397);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(17,0.002423477);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(18,0.00125648);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(19,0.0008095694);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(20,0.0002773015);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(21,0.0003751365);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(27,0.0003572656);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(35,0.0003931697);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(36,0.0004284568);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(4,0.001134305);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(5,0.001647004);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(6,0.001901067);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(7,0.002215133);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(8,0.003016782);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(9,0.002253335);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(10,0.00221848);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(11,0.001824216);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(12,0.001228742);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(13,0.001270578);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(14,0.001166768);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(15,0.0006173625);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(16,0.001113531);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(17,0.0009407221);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(18,0.0006406782);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(19,0.0005730293);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(20,0.0002773015);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(21,0.0003751365);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(27,0.0003572656);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(35,0.0003931697);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(36,0.0004284568);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_jetmass_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_H_jetmass_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_jetmass_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_jetmass_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_jetmass_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_jetmass_JEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_jetmass_JEC_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_algo_16->Modified();
   H_jetmass_JEC_algo_16->cd();
   H_jetmass_JEC_algo_16->SetSelected(H_jetmass_JEC_algo_16);
}
