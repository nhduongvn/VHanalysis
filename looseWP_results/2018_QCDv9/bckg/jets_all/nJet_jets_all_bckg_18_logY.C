#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all_bckg_18_logY()
{
//=========Macro generated from canvas: nJet_jets_all_bckg_18/nJet_jets_all_bckg_18
//=========  (Fri Mar 10 14:09:16 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_all_bckg_18 = new TCanvas("nJet_jets_all_bckg_18", "nJet_jets_all_bckg_18",0,0,600,600);
   nJet_jets_all_bckg_18->SetHighLightColor(2);
   nJet_jets_all_bckg_18->Range(-3.556941,-1.654096,15.90286,13.76608);
   nJet_jets_all_bckg_18->SetFillColor(0);
   nJet_jets_all_bckg_18->SetFillStyle(4000);
   nJet_jets_all_bckg_18->SetBorderMode(0);
   nJet_jets_all_bckg_18->SetBorderSize(2);
   nJet_jets_all_bckg_18->SetLogy();
   nJet_jets_all_bckg_18->SetLeftMargin(0.15709);
   nJet_jets_all_bckg_18->SetRightMargin(0.1234783);
   nJet_jets_all_bckg_18->SetBottomMargin(0.12);
   nJet_jets_all_bckg_18->SetFrameFillStyle(1000);
   nJet_jets_all_bckg_18->SetFrameBorderMode(0);
   nJet_jets_all_bckg_18->SetFrameFillStyle(1000);
   nJet_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.32597e+11);
   
   TH1F *st_stack_162 = new TH1F("st_stack_162","",14,-0.5,13.5);
   st_stack_162->SetMinimum(1.571536);
   st_stack_162->SetMaximum(1.675167e+12);
   st_stack_162->SetDirectory(0);
   st_stack_162->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_162->SetLineColor(ci);
   st_stack_162->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_162->GetXaxis()->SetRange(1,14);
   st_stack_162->GetXaxis()->SetLabelFont(42);
   st_stack_162->GetXaxis()->SetTitleOffset(1);
   st_stack_162->GetXaxis()->SetTitleFont(42);
   st_stack_162->GetYaxis()->SetTitle("Event/1.0");
   st_stack_162->GetYaxis()->SetLabelFont(42);
   st_stack_162->GetYaxis()->SetTitleSize(0.037);
   st_stack_162->GetYaxis()->SetTitleFont(42);
   st_stack_162->GetZaxis()->SetLabelFont(42);
   st_stack_162->GetZaxis()->SetTitleOffset(1);
   st_stack_162->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_162);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,8.868897e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,4.632071e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,1.665584e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,3.757515e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,4.420539e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,3.813418e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,2.763445e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,1.78024e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,1.051167e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,5.785394e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,3.00076e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,1.484623e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,6.998029e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,3.175925e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,2.377756e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,1654390);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,1.335291e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,8.127781e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,1.146541e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,1.153874e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,1.008875e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,8.203626e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,6.349732e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,4.746581e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,3.435828e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,2.422635e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,1.674374e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,1.125611e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,7444334);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,6243303);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(3.062923e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nJet_stack_1->SetFillColor(ci);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nJet_stack_2 = new TH1D("VbbHcc_jets_all_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(1,37.34156);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,2164.483);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,41134.95);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,350248.6);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,1582703);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,4173462);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,7206234);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,9077308);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,9106562);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,7703938);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,5704897);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,3800489);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,2317232);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,1311538);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,1340831);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(1,1.427165);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,12.04393);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,55.07936);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,163.2583);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,354.173);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,585.4384);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,772.4194);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,856.9307);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,844.2856);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,762.8107);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,644.9596);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,518.1528);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,398.2803);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,295.7598);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,292.6582);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(8.938066e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nJet_stack_2->SetFillColor(ci);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_all_bckg_18->Modified();
   nJet_jets_all_bckg_18->cd();
   nJet_jets_all_bckg_18->SetSelected(nJet_jets_all_bckg_18);
}
