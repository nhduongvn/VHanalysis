#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenB_bckg_17_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenB_bckg_17/GenJet_all_nGenB_bckg_17
//=========  (Thu Mar  9 15:52:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenB_bckg_17 = new TCanvas("GenJet_all_nGenB_bckg_17", "GenJet_all_nGenB_bckg_17",0,0,600,600);
   GenJet_all_nGenB_bckg_17->SetHighLightColor(2);
   GenJet_all_nGenB_bckg_17->Range(-4.867058,-2.94068,22.93266,14.4725);
   GenJet_all_nGenB_bckg_17->SetFillColor(0);
   GenJet_all_nGenB_bckg_17->SetFillStyle(4000);
   GenJet_all_nGenB_bckg_17->SetBorderMode(0);
   GenJet_all_nGenB_bckg_17->SetBorderSize(2);
   GenJet_all_nGenB_bckg_17->SetLogy();
   GenJet_all_nGenB_bckg_17->SetLeftMargin(0.15709);
   GenJet_all_nGenB_bckg_17->SetRightMargin(0.1234783);
   GenJet_all_nGenB_bckg_17->SetBottomMargin(0.12);
   GenJet_all_nGenB_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenB_bckg_17->SetFrameBorderMode(0);
   GenJet_all_nGenB_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenB_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(1.565873e+12);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",20,-0.5,19.5);
   st_stack_16->SetMinimum(0.1408971);
   st_stack_16->SetMaximum(5.384962e+12);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Event/1.0");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetTitleSize(0.037);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *GenJet_all_nGenB_stack_1 = new TH1D("GenJet_all_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_1->SetBinContent(1,1.299675e+12);
   GenJet_all_nGenB_stack_1->SetBinContent(2,6.783205e+10);
   GenJet_all_nGenB_stack_1->SetBinContent(3,4.009153e+10);
   GenJet_all_nGenB_stack_1->SetBinContent(4,2.199383e+09);
   GenJet_all_nGenB_stack_1->SetBinContent(5,3.231136e+08);
   GenJet_all_nGenB_stack_1->SetBinContent(6,2.063787e+07);
   GenJet_all_nGenB_stack_1->SetBinContent(7,1461721);
   GenJet_all_nGenB_stack_1->SetBinContent(8,40049.29);
   GenJet_all_nGenB_stack_1->SetBinContent(9,2519.51);
   GenJet_all_nGenB_stack_1->SetBinContent(10,13.23539);
   GenJet_all_nGenB_stack_1->SetBinError(1,1.447382e+08);
   GenJet_all_nGenB_stack_1->SetBinError(2,3.286399e+07);
   GenJet_all_nGenB_stack_1->SetBinError(3,2.500136e+07);
   GenJet_all_nGenB_stack_1->SetBinError(4,5761044);
   GenJet_all_nGenB_stack_1->SetBinError(5,2149533);
   GenJet_all_nGenB_stack_1->SetBinError(6,527032.9);
   GenJet_all_nGenB_stack_1->SetBinError(7,133850.5);
   GenJet_all_nGenB_stack_1->SetBinError(8,9957.195);
   GenJet_all_nGenB_stack_1->SetBinError(9,1697.432);
   GenJet_all_nGenB_stack_1->SetBinError(10,9.964757);
   GenJet_all_nGenB_stack_1->SetEntries(3.060973e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenB_stack_1->SetFillColor(ci);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenB_stack_1,"");
   
   TH1D *GenJet_all_nGenB_stack_2 = new TH1D("GenJet_all_nGenB_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_2->SetBinContent(1,43455.13);
   GenJet_all_nGenB_stack_2->SetBinContent(2,2817960);
   GenJet_all_nGenB_stack_2->SetBinContent(3,3.03173e+07);
   GenJet_all_nGenB_stack_2->SetBinContent(4,2596995);
   GenJet_all_nGenB_stack_2->SetBinContent(5,445327.3);
   GenJet_all_nGenB_stack_2->SetBinContent(6,43865.75);
   GenJet_all_nGenB_stack_2->SetBinContent(7,4766.254);
   GenJet_all_nGenB_stack_2->SetBinContent(8,450.7127);
   GenJet_all_nGenB_stack_2->SetBinContent(9,40.66771);
   GenJet_all_nGenB_stack_2->SetBinContent(10,3.519425);
   GenJet_all_nGenB_stack_2->SetBinContent(11,0.356095);
   GenJet_all_nGenB_stack_2->SetBinError(1,53.73736);
   GenJet_all_nGenB_stack_2->SetBinError(2,431.9341);
   GenJet_all_nGenB_stack_2->SetBinError(3,1414.887);
   GenJet_all_nGenB_stack_2->SetBinError(4,415.7123);
   GenJet_all_nGenB_stack_2->SetBinError(5,172.498);
   GenJet_all_nGenB_stack_2->SetBinError(6,54.33641);
   GenJet_all_nGenB_stack_2->SetBinError(7,17.93398);
   GenJet_all_nGenB_stack_2->SetBinError(8,5.531804);
   GenJet_all_nGenB_stack_2->SetBinError(9,1.670903);
   GenJet_all_nGenB_stack_2->SetBinError(10,0.5010021);
   GenJet_all_nGenB_stack_2->SetBinError(11,0.137733);
   GenJet_all_nGenB_stack_2->SetEntries(6.227592e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenB_stack_2->SetFillColor(ci);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenB_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_all_nGenB_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   GenJet_all_nGenB_bckg_17->Modified();
   GenJet_all_nGenB_bckg_17->cd();
   GenJet_all_nGenB_bckg_17->SetSelected(GenJet_all_nGenB_bckg_17);
}
