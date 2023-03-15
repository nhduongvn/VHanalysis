#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_bckg_17_logY()
{
//=========Macro generated from canvas: nB_medium_jets_all_bckg_17/nB_medium_jets_all_bckg_17
//=========  (Thu Mar  9 13:30:14 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_bckg_17 = new TCanvas("nB_medium_jets_all_bckg_17", "nB_medium_jets_all_bckg_17",0,0,600,600);
   nB_medium_jets_all_bckg_17->SetHighLightColor(2);
   nB_medium_jets_all_bckg_17->Range(-2.683529,-1.739844,11.21633,14.27303);
   nB_medium_jets_all_bckg_17->SetFillColor(0);
   nB_medium_jets_all_bckg_17->SetFillStyle(4000);
   nB_medium_jets_all_bckg_17->SetBorderMode(0);
   nB_medium_jets_all_bckg_17->SetBorderSize(2);
   nB_medium_jets_all_bckg_17->SetLogy();
   nB_medium_jets_all_bckg_17->SetLeftMargin(0.15709);
   nB_medium_jets_all_bckg_17->SetRightMargin(0.1234783);
   nB_medium_jets_all_bckg_17->SetBottomMargin(0.12);
   nB_medium_jets_all_bckg_17->SetFrameFillStyle(1000);
   nB_medium_jets_all_bckg_17->SetFrameBorderMode(0);
   nB_medium_jets_all_bckg_17->SetFrameFillStyle(1000);
   nB_medium_jets_all_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.452825e+12);
   
   TH1F *st_stack_184 = new TH1F("st_stack_184","",10,-0.5,9.5);
   st_stack_184->SetMinimum(1.519501);
   st_stack_184->SetMaximum(4.696175e+12);
   st_stack_184->SetDirectory(0);
   st_stack_184->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_184->SetLineColor(ci);
   st_stack_184->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_184->GetXaxis()->SetRange(1,10);
   st_stack_184->GetXaxis()->SetLabelFont(42);
   st_stack_184->GetXaxis()->SetTitleOffset(1);
   st_stack_184->GetXaxis()->SetTitleFont(42);
   st_stack_184->GetYaxis()->SetTitle("Event/1.0");
   st_stack_184->GetYaxis()->SetLabelFont(42);
   st_stack_184->GetYaxis()->SetTitleSize(0.037);
   st_stack_184->GetYaxis()->SetTitleFont(42);
   st_stack_184->GetZaxis()->SetLabelFont(42);
   st_stack_184->GetZaxis()->SetTitleOffset(1);
   st_stack_184->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_184);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,1.205843e+12);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,1.791886e+11);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,2.332525e+10);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,1.680224e+09);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,1.010199e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,4933541);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,189771.4);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(8,4697.699);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(11,23.88918);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,1.395394e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,5.328928e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,1.885808e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,4933200);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,1161963);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,246231.2);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,42120.25);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(8,1081.135);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(11,23.88918);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(3.060973e+08);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,2436707);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,1.216047e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,1.687483e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,4202803);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,539557.8);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,51052.38);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,4316.07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,376.7981);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(9,40.60389);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(10,5.873027);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(11,1.067407);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,398.3593);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,893.1256);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,1055.952);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,533.6287);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,192.8559);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,59.62135);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,17.42747);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,5.212001);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(9,1.729099);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(10,0.6642963);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(11,0.2908177);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(6.227592e+08);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_all_bckg_17->Modified();
   nB_medium_jets_all_bckg_17->cd();
   nB_medium_jets_all_bckg_17->SetSelected(nB_medium_jets_all_bckg_17);
}
