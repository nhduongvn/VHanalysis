#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_algo_17()
{
//=========Macro generated from canvas: Z_jetmass_JEC_algo_17/Z_jetmass_JEC_algo_17
//=========  (Thu Mar 23 11:25:14 2023) by ROOT version 6.26/06
   TCanvas *Z_jetmass_JEC_algo_17 = new TCanvas("Z_jetmass_JEC_algo_17", "Z_jetmass_JEC_algo_17",0,0,600,600);
   Z_jetmass_JEC_algo_17->SetHighLightColor(2);
   Z_jetmass_JEC_algo_17->Range(-65.50587,-0.02631438,351.4899,0.1929721);
   Z_jetmass_JEC_algo_17->SetFillColor(0);
   Z_jetmass_JEC_algo_17->SetFillStyle(4000);
   Z_jetmass_JEC_algo_17->SetBorderMode(0);
   Z_jetmass_JEC_algo_17->SetBorderSize(2);
   Z_jetmass_JEC_algo_17->SetLeftMargin(0.15709);
   Z_jetmass_JEC_algo_17->SetRightMargin(0.1234783);
   Z_jetmass_JEC_algo_17->SetBottomMargin(0.12);
   Z_jetmass_JEC_algo_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.1710435);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",150,0,300);
   st_stack_190->SetMinimum(0);
   st_stack_190->SetMaximum(0.1710435);
   st_stack_190->SetDirectory(0);
   st_stack_190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_190->SetLineColor(ci);
   st_stack_190->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   st_stack_190->GetXaxis()->SetRange(1,150);
   st_stack_190->GetXaxis()->SetLabelFont(42);
   st_stack_190->GetXaxis()->SetTitleOffset(1);
   st_stack_190->GetXaxis()->SetTitleFont(42);
   st_stack_190->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_190->GetYaxis()->SetLabelFont(42);
   st_stack_190->GetYaxis()->SetTitleSize(0.037);
   st_stack_190->GetYaxis()->SetTitleFont(42);
   st_stack_190->GetZaxis()->SetLabelFont(42);
   st_stack_190->GetZaxis()->SetTitleOffset(1);
   st_stack_190->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_190);
   
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_stack_1 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_stack_1","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(4,0.01572856);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(5,0.05728849);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(6,0.1061678);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(7,0.09918494);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(8,0.089902);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(9,0.06683056);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(10,0.03297276);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(11,0.03672157);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(12,0.01831123);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(13,0.01788537);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(14,0.001239159);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(15,0.003685564);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(16,0.00510745);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(17,0.002760312);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(18,-1.705805e-05);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(19,0.00324396);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(20,0.001979228);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(34,0.001779398);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(4,0.005966322);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(5,0.01085262);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(6,0.01435203);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(7,0.01401399);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(8,0.01320722);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(9,0.01144336);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(10,0.00747986);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(11,0.008219195);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(12,0.005830432);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(13,0.006053973);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(14,0.001239159);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(15,0.002608742);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(16,0.002967937);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(17,0.001953737);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(18,0.002828005);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(19,0.002298846);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(20,0.001979228);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(34,0.001779398);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetEntries(335);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_JEC_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_stack_2 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_stack_2","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(3,0.0002638244);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(4,0.004203589);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(5,0.01582878);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(6,0.03579825);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(7,0.03772458);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(8,0.03051685);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(9,0.02408922);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(10,0.01735335);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(11,0.01244573);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(12,0.009196);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(13,0.005094646);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(14,0.003629383);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(15,0.002496325);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(16,0.001238746);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(17,0.001253836);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(18,0.0006486088);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(19,0.0002557755);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(20,0.0005431071);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(25,0.0002515746);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(27,0.000131552);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(30,0.0002615845);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(3,0.0002638244);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(4,0.001008026);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(5,0.001960314);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(6,0.002915284);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(7,0.003003687);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(8,0.002691009);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(9,0.002389387);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(10,0.002054856);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(11,0.001717735);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(12,0.001521888);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(13,0.001110111);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(14,0.0009456182);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(15,0.0007613384);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(16,0.0004914541);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(17,0.0005224764);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(18,0.0003777129);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(19,0.0002557755);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(20,0.0003880253);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(25,0.0002515746);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(27,0.000131552);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(30,0.0002615845);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetEntries(887);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_JEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_JEC_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_algo_17->Modified();
   Z_jetmass_JEC_algo_17->cd();
   Z_jetmass_JEC_algo_17->SetSelected(Z_jetmass_JEC_algo_17);
}
