#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_algo_17()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_algo_17/Z_jetmass_noJEC_algo_17
//=========  (Thu Mar 23 11:25:14 2023) by ROOT version 6.26/06
   TCanvas *Z_jetmass_noJEC_algo_17 = new TCanvas("Z_jetmass_noJEC_algo_17", "Z_jetmass_noJEC_algo_17",0,0,600,600);
   Z_jetmass_noJEC_algo_17->SetHighLightColor(2);
   Z_jetmass_noJEC_algo_17->Range(-65.50587,-0.02520219,351.4899,0.1848161);
   Z_jetmass_noJEC_algo_17->SetFillColor(0);
   Z_jetmass_noJEC_algo_17->SetFillStyle(4000);
   Z_jetmass_noJEC_algo_17->SetBorderMode(0);
   Z_jetmass_noJEC_algo_17->SetBorderSize(2);
   Z_jetmass_noJEC_algo_17->SetLeftMargin(0.15709);
   Z_jetmass_noJEC_algo_17->SetRightMargin(0.1234783);
   Z_jetmass_noJEC_algo_17->SetBottomMargin(0.12);
   Z_jetmass_noJEC_algo_17->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_algo_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_algo_17->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.1638142);
   
   TH1F *st_stack_186 = new TH1F("st_stack_186","",150,0,300);
   st_stack_186->SetMinimum(0);
   st_stack_186->SetMaximum(0.1638142);
   st_stack_186->SetDirectory(0);
   st_stack_186->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_186->SetLineColor(ci);
   st_stack_186->GetXaxis()->SetTitle("b-jet mass [GeV]");
   st_stack_186->GetXaxis()->SetRange(1,150);
   st_stack_186->GetXaxis()->SetLabelFont(42);
   st_stack_186->GetXaxis()->SetTitleOffset(1);
   st_stack_186->GetXaxis()->SetTitleFont(42);
   st_stack_186->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_186->GetYaxis()->SetLabelFont(42);
   st_stack_186->GetYaxis()->SetTitleSize(0.037);
   st_stack_186->GetYaxis()->SetTitleFont(42);
   st_stack_186->GetZaxis()->SetLabelFont(42);
   st_stack_186->GetZaxis()->SetTitleOffset(1);
   st_stack_186->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_186);
   
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC_stack_1 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC_stack_1","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(3,0.004685205);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(4,0.03497302);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(5,0.07435942);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(6,0.09600488);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(7,0.1025923);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(8,0.07513091);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(9,0.0639755);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(10,0.02605569);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(11,0.03726442);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(12,0.01219322);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(13,0.008392854);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(14,0.006605018);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(15,0.008793014);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(16,0.002760312);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(18,0.003226902);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(20,0.001979228);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(41,0.001779398);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(3,0.003895827);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(4,0.008377811);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(5,0.01239308);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(6,0.01390603);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(7,0.01382551);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(8,0.01190923);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(9,0.01113078);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(10,0.006817257);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(11,0.008287465);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(12,0.004818895);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(13,0.004241909);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(14,0.003352775);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(15,0.003951479);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(16,0.001953737);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(18,0.00364449);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(20,0.001979228);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(41,0.001779398);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetEntries(335);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_noJEC_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC_stack_2 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC_stack_2","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(2,0.0002638244);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(3,0.001864108);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(4,0.008723496);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(5,0.02631244);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(6,0.03241685);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(7,0.0333735);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(8,0.02976179);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(9,0.02059979);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(10,0.01615941);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(11,0.01149075);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(12,0.00824205);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(13,0.004851976);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(14,0.002745884);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(15,0.002362697);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(16,0.0009157349);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(17,0.001125623);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(18,0.0009616779);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(19,0.0001767029);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(20,0.0002323049);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(22,0.0002515746);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(26,0.000131552);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(28,0.0002615845);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(2,0.0002638244);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(3,0.0007063112);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(4,0.001450446);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(5,0.002504394);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(6,0.002787343);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(7,0.002810413);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(8,0.002664023);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(9,0.002207501);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(10,0.001981638);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(11,0.001670744);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(12,0.001422889);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(13,0.001070869);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(14,0.0008341366);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(15,0.0007588016);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(16,0.0004234559);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(17,0.0004789752);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(18,0.0004812678);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(19,0.0001767029);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(20,0.0002323049);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(22,0.0002515746);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(26,0.000131552);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(28,0.0002615845);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetEntries(887);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_noJEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_noJEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_noJEC_stack_1","ZHcc","F");

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
   Z_jetmass_noJEC_algo_17->Modified();
   Z_jetmass_noJEC_algo_17->cd();
   Z_jetmass_noJEC_algo_17->SetSelected(Z_jetmass_noJEC_algo_17);
}
