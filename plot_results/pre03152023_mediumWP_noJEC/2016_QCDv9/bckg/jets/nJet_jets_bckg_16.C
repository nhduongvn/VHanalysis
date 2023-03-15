#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_bckg_16()
{
//=========Macro generated from canvas: nJet_jets_bckg_16/nJet_jets_bckg_16
//=========  (Thu Mar  9 13:30:48 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_bckg_16 = new TCanvas("nJet_jets_bckg_16", "nJet_jets_bckg_16",0,0,600,600);
   nJet_jets_bckg_16->SetHighLightColor(2);
   nJet_jets_bckg_16->Range(-3.556941,-1.134346e+11,15.90286,8.318539e+11);
   nJet_jets_bckg_16->SetFillColor(0);
   nJet_jets_bckg_16->SetFillStyle(4000);
   nJet_jets_bckg_16->SetBorderMode(0);
   nJet_jets_bckg_16->SetBorderSize(2);
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
   st->SetMaximum(7.37325e+11);
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",14,-0.5,13.5);
   st_stack_2->SetMinimum(0);
   st_stack_2->SetMaximum(7.37325e+11);
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
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,6.119787e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,3.333355e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,1.893617e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,1.5479e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,2.12285e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,2.622702e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,3.63279e+07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,5205320);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,752704.1);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,110884.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,16069.52);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,2151.033);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,318.092);
   VbbHcc_jets_nJet_stack_1->SetBinContent(14,35.03823);
   VbbHcc_jets_nJet_stack_1->SetBinContent(15,16.39124);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,1.163235e+08);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,8.355171e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,5.795007e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,9248930);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,1959896);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,449064.9);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,136773.5);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,40643.51);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,6092.512);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,1584.776);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,407.6209);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,97.67638);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,29.82443);
   VbbHcc_jets_nJet_stack_1->SetBinError(14,7.448393);
   VbbHcc_jets_nJet_stack_1->SetBinError(15,8.903848);
   VbbHcc_jets_nJet_stack_1->SetEntries(2.425785e+08);

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
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,1011705);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,3579881);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,7467386);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,8273578);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,5639915);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,2617612);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,924097.1);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,265791.7);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,66802.53);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,15145.11);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,3176.294);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,611.2532);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,115.741);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,20.11447);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,2.881451);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,231.3591);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,441.8839);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,662.9806);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,724.4809);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,617.2844);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,427.8993);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,256.4895);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,138.0764);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,69.35698);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,33.0567);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,15.14019);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,6.630689);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,2.884885);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,1.210642);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,0.4566456);
   VbbHcc_jets_nJet_stack_2->SetEntries(5.166267e+08);

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
