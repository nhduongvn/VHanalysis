#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all_bckg_16()
{
//=========Macro generated from canvas: nJet_jets_all_bckg_16/nJet_jets_all_bckg_16
//=========  (Thu Mar  9 13:30:52 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_all_bckg_16 = new TCanvas("nJet_jets_all_bckg_16", "nJet_jets_all_bckg_16",0,0,600,600);
   nJet_jets_all_bckg_16->SetHighLightColor(2);
   nJet_jets_all_bckg_16->Range(-3.556941,-5.039001e+10,15.90286,3.695268e+11);
   nJet_jets_all_bckg_16->SetFillColor(0);
   nJet_jets_all_bckg_16->SetFillStyle(4000);
   nJet_jets_all_bckg_16->SetBorderMode(0);
   nJet_jets_all_bckg_16->SetBorderSize(2);
   nJet_jets_all_bckg_16->SetLeftMargin(0.15709);
   nJet_jets_all_bckg_16->SetRightMargin(0.1234783);
   nJet_jets_all_bckg_16->SetBottomMargin(0.12);
   nJet_jets_all_bckg_16->SetFrameFillStyle(1000);
   nJet_jets_all_bckg_16->SetFrameBorderMode(0);
   nJet_jets_all_bckg_16->SetFrameFillStyle(1000);
   nJet_jets_all_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.275351e+11);
   
   TH1F *st_stack_158 = new TH1F("st_stack_158","",14,-0.5,13.5);
   st_stack_158->SetMinimum(0);
   st_stack_158->SetMaximum(3.275351e+11);
   st_stack_158->SetDirectory(0);
   st_stack_158->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_158->SetLineColor(ci);
   st_stack_158->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_158->GetXaxis()->SetRange(1,14);
   st_stack_158->GetXaxis()->SetLabelFont(42);
   st_stack_158->GetXaxis()->SetTitleOffset(1);
   st_stack_158->GetXaxis()->SetTitleFont(42);
   st_stack_158->GetYaxis()->SetTitle("Event/1.0");
   st_stack_158->GetYaxis()->SetLabelFont(42);
   st_stack_158->GetYaxis()->SetTitleSize(0.037);
   st_stack_158->GetYaxis()->SetTitleFont(42);
   st_stack_158->GetZaxis()->SetLabelFont(42);
   st_stack_158->GetZaxis()->SetTitleOffset(1);
   st_stack_158->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_158);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,7.981023e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,3.672037e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,1.297169e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,2.636071e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,2.71853e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,2.035424e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,1.287936e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,7.344274e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,3.915574e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,1.989506e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,9.788929e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,4.738336e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,2.233891e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,1.075412e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,9.875432e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,1339866);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,9099465);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,5.347972e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,7.563604e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,7.574555e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,6.448587e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,5.04735e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,3.756167e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,2.710032e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,1.913644e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,1.332998e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,9236583);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,6317839);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,4381331);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,4167188);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(2.425785e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_1->SetLineColor(ci);
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
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(1,32.91701);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,1755.822);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,32141.92);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,266670.4);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,1160009);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,2911337);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,4712920);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,5501531);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,5082236);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,3945308);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,2683991);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,1649683);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,935552.8);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,498147.7);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,484524.8);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(1,1.220391);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,8.948542);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,38.94657);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,115.1121);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,248.3498);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,408.1472);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,534.954);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,588.4634);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,571.7052);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,506.8244);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,419.3455);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,329.0797);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,247.6437);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,180.3309);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,176.3407);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(5.166267e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_2->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   nJet_jets_all_bckg_16->Modified();
   nJet_jets_all_bckg_16->cd();
   nJet_jets_all_bckg_16->SetSelected(nJet_jets_all_bckg_16);
}
