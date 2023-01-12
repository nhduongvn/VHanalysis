#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_17()
{
//=========Macro generated from canvas: nJet_jets_17/nJet_jets_17
//=========  (Mon Dec 19 11:02:45 2022) by ROOT version 6.26/06
   TCanvas *nJet_jets_17 = new TCanvas("nJet_jets_17", "nJet_jets_17",0,0,600,600);
   nJet_jets_17->SetHighLightColor(2);
   nJet_jets_17->Range(-3.556941,-1.254595e+11,15.90286,9.200365e+11);
   nJet_jets_17->SetFillColor(0);
   nJet_jets_17->SetFillStyle(4000);
   nJet_jets_17->SetBorderMode(0);
   nJet_jets_17->SetBorderSize(2);
   nJet_jets_17->SetLeftMargin(0.15709);
   nJet_jets_17->SetRightMargin(0.1234783);
   nJet_jets_17->SetBottomMargin(0.12);
   nJet_jets_17->SetFrameFillStyle(1000);
   nJet_jets_17->SetFrameBorderMode(0);
   nJet_jets_17->SetFrameFillStyle(1000);
   nJet_jets_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(8.154869e+11);
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",14,-0.5,13.5);
   st_stack_2->SetMinimum(0);
   st_stack_2->SetMaximum(8.154869e+11);
   st_stack_2->SetDirectory(0);
   st_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_2->SetLineColor(ci);
   st_stack_2->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_2->GetXaxis()->SetRange(1,14);
   st_stack_2->GetXaxis()->SetLabelFont(42);
   st_stack_2->GetXaxis()->SetTitleOffset(1);
   st_stack_2->GetXaxis()->SetTitleFont(42);
   st_stack_2->GetYaxis()->SetTitle("Events/1.0");
   st_stack_2->GetYaxis()->SetLabelFont(42);
   st_stack_2->GetYaxis()->SetTitleSize(0.037);
   st_stack_2->GetYaxis()->SetTitleFont(42);
   st_stack_2->GetZaxis()->SetLabelFont(42);
   st_stack_2->GetZaxis()->SetTitleOffset(1);
   st_stack_2->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_2);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,2.191777e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,5.436566e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,5.199662e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,1.059471e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,1.808912e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,2.773726e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,4.43369e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,7.264481e+07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,1.230393e+07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,2104127);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,403586.2);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,60739.48);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,9973.695);
   VbbHcc_jets_nJet_stack_1->SetBinContent(14,1521.58);
   VbbHcc_jets_nJet_stack_1->SetBinContent(15,408.0948);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,6.077644e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,9.492625e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,9.067001e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,3.656215e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,1.207186e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,3646033);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,1139693);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,362819.9);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,121887);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,42749.26);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,31822.66);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,2660.578);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,552.157);
   VbbHcc_jets_nJet_stack_1->SetBinError(14,112.262);
   VbbHcc_jets_nJet_stack_1->SetBinError(15,58.99724);
   VbbHcc_jets_nJet_stack_1->SetEntries(3.0187e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,205257.9);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,1396600);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,4341446);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,7823662);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,9141246);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,7168448);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,3904890);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,1568429);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,519036.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,149805.1);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,39077.92);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,9482.352);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,2168.218);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,468.3395);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,119.5713);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,100.2843);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,265.6629);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,486.0806);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,686.316);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,780.329);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,718.0789);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,540.5722);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,345.4462);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,199.5036);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,107.3839);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,54.89595);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,27.03666);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,12.91134);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,6.006747);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,3.033555);
   VbbHcc_jets_nJet_stack_2->SetEntries(6.245234e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","QCD","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_17->Modified();
   nJet_jets_17->cd();
   nJet_jets_17->SetSelected(nJet_jets_17);
}
