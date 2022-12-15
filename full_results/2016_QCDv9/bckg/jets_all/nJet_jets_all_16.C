void nJet_jets_all_16()
{
//=========Macro generated from canvas: nJet_jets_all_16/nJet_jets_all_16
//=========  (Thu Dec 15 10:05:11 2022) by ROOT version 6.14/09
   TCanvas *nJet_jets_all_16 = new TCanvas("nJet_jets_all_16", "nJet_jets_all_16",0,0,600,600);
   nJet_jets_all_16->SetHighLightColor(2);
   nJet_jets_all_16->Range(-3.556941,-6.77381e+10,15.90286,4.96746e+11);
   nJet_jets_all_16->SetFillColor(0);
   nJet_jets_all_16->SetFillStyle(4000);
   nJet_jets_all_16->SetBorderMode(0);
   nJet_jets_all_16->SetBorderSize(2);
   nJet_jets_all_16->SetLeftMargin(0.15709);
   nJet_jets_all_16->SetRightMargin(0.1234783);
   nJet_jets_all_16->SetBottomMargin(0.12);
   nJet_jets_all_16->SetFrameFillStyle(1000);
   nJet_jets_all_16->SetFrameBorderMode(0);
   nJet_jets_all_16->SetFrameFillStyle(1000);
   nJet_jets_all_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.193311e+11);
   
   TH1F *st_stack_45 = new TH1F("st_stack_45","",14,-0.5,13.5);
   st_stack_45->SetMinimum(0);
   st_stack_45->SetMaximum(4.402976e+11);
   st_stack_45->SetDirectory(0);
   st_stack_45->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_45->SetLineColor(ci);
   st_stack_45->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_45->GetXaxis()->SetRange(1,14);
   st_stack_45->GetXaxis()->SetLabelFont(42);
   st_stack_45->GetXaxis()->SetLabelSize(0.035);
   st_stack_45->GetXaxis()->SetTitleSize(0.035);
   st_stack_45->GetXaxis()->SetTitleFont(42);
   st_stack_45->GetYaxis()->SetTitle("Events/1.0");
   st_stack_45->GetYaxis()->SetLabelFont(42);
   st_stack_45->GetYaxis()->SetLabelSize(0.035);
   st_stack_45->GetYaxis()->SetTitleSize(0.037);
   st_stack_45->GetYaxis()->SetTitleOffset(0);
   st_stack_45->GetYaxis()->SetTitleFont(42);
   st_stack_45->GetZaxis()->SetLabelFont(42);
   st_stack_45->GetZaxis()->SetLabelSize(0.035);
   st_stack_45->GetZaxis()->SetTitleSize(0.035);
   st_stack_45->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_45);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,6.826329e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,3.466449e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,1.289985e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,2.685217e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,2.795529e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,2.077521e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,1.281432e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,7.017214e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,3.530696e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,1.665841e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,7.478073e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,3.206912e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,1.331234e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,5.357298e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,3.378691e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,1140491);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,8146836);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,4.914206e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,7.038575e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,7.087566e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,6.013788e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,4.643642e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,3.378481e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,2.357136e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,1.593278e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,1.051439e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,6780684);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,4308392);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,2695507);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,2089811);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(2.445319e+08);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nJet_stack_2 = new TH1D("VbbHcc_jets_all_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(1,33.08516);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,1752.111);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,32131.89);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,266633.1);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,1159652);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,2911280);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,4717037);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,5510800);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,5091707);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,3950030);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,2681826);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,1643063);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,927757.4);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,491031.1);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,469786.6);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(1,1.239162);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,9.057728);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,39.68118);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,118.2454);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,257.9535);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,429.4603);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,569.3664);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,630.845);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,615.5792);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,547.0813);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,453.032);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,355.3641);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,267.0373);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,193.9273);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,188.0392);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(4.67375e+08);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_1","QCD","F");

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
   nJet_jets_all_16->Modified();
   nJet_jets_all_16->cd();
   nJet_jets_all_16->SetSelected(nJet_jets_all_16);
}
