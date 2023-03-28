#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_algo_16()
{
//=========Macro generated from canvas: H_jetmass_JEC_algo_16/H_jetmass_JEC_algo_16
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *H_jetmass_JEC_algo_16 = new TCanvas("H_jetmass_JEC_algo_16", "H_jetmass_JEC_algo_16",0,0,600,600);
   H_jetmass_JEC_algo_16->SetHighLightColor(2);
   H_jetmass_JEC_algo_16->Range(-65.50587,-0.01330269,351.4899,0.09755309);
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
   st->SetMaximum(0.08646751);
   
   TH1F *st_stack_173 = new TH1F("st_stack_173","",150,0,300);
   st_stack_173->SetMinimum(0);
   st_stack_173->SetMaximum(0.08646751);
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
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(1,0.003230958);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(2,0.007738277);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(3,0.04173368);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(4,0.02389163);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(5,0.02011515);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(6,0.03618017);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(7,0.04479346);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(8,0.05217391);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(9,0.03715311);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(10,0.01851383);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(11,0.01473357);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(12,0.01431587);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(13,0.005744694);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(14,0.01497841);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(15,0.002893616);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(16,0.0028745);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(17,0.008718675);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(19,0.002871662);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(20,0.008082695);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinContent(22,0.00296763);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(1,0.003230958);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(2,0.004494091);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(3,0.01119194);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(4,0.008459206);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(5,0.007640003);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(6,0.01045813);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(7,0.01157821);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(8,0.01239069);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(9,0.0103532);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(10,0.007567742);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(11,0.006605907);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(12,0.006406051);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(13,0.004062112);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(14,0.006711588);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(15,0.002893616);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(16,0.0028745);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(17,0.005033891);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(19,0.002871662);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(20,0.004714467);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetBinError(22,0.00296763);
   VbbHcc_algo_H_jetmass_JEC_stack_1->SetEntries(124);

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
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(1,0.00455828);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(2,0.006666055);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(3,0.00604571);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(4,0.006065157);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(5,0.007719017);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(6,0.009735251);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(7,0.01501079);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(8,0.01959412);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(9,0.01334754);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(10,0.009635182);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(11,0.005895052);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(12,0.003274814);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(13,0.002277583);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(14,0.003015314);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(15,0.0007661182);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(16,0.002603416);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(17,0.0003751166);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(19,0.0003800229);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(20,0.0007525454);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(35,0.0003931697);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinContent(40,0.0003829271);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(1,0.001327809);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(2,0.001556799);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(3,0.001520365);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(4,0.001521636);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(5,0.001708575);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(6,0.001921114);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(7,0.002409902);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(8,0.002746359);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(9,0.002260454);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(10,0.001933063);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(11,0.001480829);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(12,0.001160002);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(13,0.0008795145);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(14,0.001070471);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(15,0.0005417274);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(16,0.001012545);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(17,0.0003751166);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(19,0.0003800229);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(20,0.0005321564);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(35,0.0003931697);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetBinError(40,0.0003829271);
   VbbHcc_algo_H_jetmass_JEC_stack_2->SetEntries(317);

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
