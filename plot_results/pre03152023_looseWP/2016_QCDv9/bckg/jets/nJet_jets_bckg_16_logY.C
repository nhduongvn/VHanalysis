#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_bckg_16_logY()
{
//=========Macro generated from canvas: nJet_jets_bckg_16/nJet_jets_bckg_16
//=========  (Fri Mar 10 14:09:13 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_bckg_16 = new TCanvas("nJet_jets_bckg_16", "nJet_jets_bckg_16",0,0,600,600);
   nJet_jets_bckg_16->SetHighLightColor(2);
   nJet_jets_bckg_16->Range(-3.556941,-1.681957,15.90286,13.93044);
   nJet_jets_bckg_16->SetFillColor(0);
   nJet_jets_bckg_16->SetFillStyle(4000);
   nJet_jets_bckg_16->SetBorderMode(0);
   nJet_jets_bckg_16->SetBorderSize(2);
   nJet_jets_bckg_16->SetLogy();
   nJet_jets_bckg_16->SetLeftMargin(0.15709);
   nJet_jets_bckg_16->SetRightMargin(0.1234783);
   nJet_jets_bckg_16->SetBottomMargin(0.12);
   nJet_jets_bckg_16->SetFrameFillStyle(1000);
   nJet_jets_bckg_16->SetFrameBorderMode(0);
   nJet_jets_bckg_16->SetFrameFillStyle(1000);
   nJet_jets_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(7.373251e+11);
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",14,-0.5,13.5);
   st_stack_2->SetMinimum(1.554284);
   st_stack_2->SetMaximum(2.339925e+12);
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
   st_stack_2->GetYaxis()->SetTitle("Event/1.0");
   st_stack_2->GetYaxis()->SetLabelFont(42);
   st_stack_2->GetYaxis()->SetTitleSize(0.037);
   st_stack_2->GetYaxis()->SetTitleFont(42);
   st_stack_2->GetZaxis()->SetLabelFont(42);
   st_stack_2->GetZaxis()->SetTitleOffset(1);
   st_stack_2->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_2);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,6.119788e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,3.333325e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,1.893627e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,1.54785e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,2.12292e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,2.622653e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,3.633179e+07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,5205658);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,752530.6);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,110909.3);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,16045.46);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,2152.298);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,318.092);
   VbbHcc_jets_nJet_stack_1->SetBinContent(14,35.03823);
   VbbHcc_jets_nJet_stack_1->SetBinContent(15,16.39124);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,1.165349e+08);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,8.37024e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,5.805384e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,9262584);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,1962701);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,449522.9);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,137121.7);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,40758.04);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,6098.581);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,1587.556);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,407.6109);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,97.97007);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,29.82443);
   VbbHcc_jets_nJet_stack_1->SetBinError(14,7.448393);
   VbbHcc_jets_nJet_stack_1->SetBinError(15,8.903848);
   VbbHcc_jets_nJet_stack_1->SetEntries(2.416594e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);
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
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,1011805);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,3580136);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,7467438);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,8273970);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,5639980);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,2617919);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,924133.9);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,265799.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,66808.75);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,15168.05);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,3175.104);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,611.4018);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,117.2577);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,19.64954);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,3.069185);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,230.9854);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,441.0799);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,660.7769);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,720.8401);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,613.1351);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,424.6426);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,254.3988);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,136.9145);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,68.76204);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,32.79103);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,15.00034);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,6.570783);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,2.878318);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,1.184906);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,0.4646918);
   VbbHcc_jets_nJet_stack_2->SetEntries(5.194289e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   nJet_jets_bckg_16->Modified();
   nJet_jets_bckg_16->cd();
   nJet_jets_bckg_16->SetSelected(nJet_jets_bckg_16);
}
