#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenJet_bckg_16()
{
//=========Macro generated from canvas: GenJet_all_nGenJet_bckg_16/GenJet_all_nGenJet_bckg_16
//=========  (Fri Mar 10 12:49:27 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenJet_bckg_16 = new TCanvas("GenJet_all_nGenJet_bckg_16", "GenJet_all_nGenJet_bckg_16",0,0,600,600);
   GenJet_all_nGenJet_bckg_16->SetHighLightColor(2);
   GenJet_all_nGenJet_bckg_16->Range(-4.867058,-5.610209e+10,22.93266,4.114153e+11);
   GenJet_all_nGenJet_bckg_16->SetFillColor(0);
   GenJet_all_nGenJet_bckg_16->SetFillStyle(4000);
   GenJet_all_nGenJet_bckg_16->SetBorderMode(0);
   GenJet_all_nGenJet_bckg_16->SetBorderSize(2);
   GenJet_all_nGenJet_bckg_16->SetLeftMargin(0.15709);
   GenJet_all_nGenJet_bckg_16->SetRightMargin(0.1234783);
   GenJet_all_nGenJet_bckg_16->SetBottomMargin(0.12);
   GenJet_all_nGenJet_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_bckg_16->SetFrameBorderMode(0);
   GenJet_all_nGenJet_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.646636e+11);
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",20,-0.5,19.5);
   st_stack_2->SetMinimum(0);
   st_stack_2->SetMaximum(3.646636e+11);
   st_stack_2->SetDirectory(0);
   st_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_2->SetLineColor(ci);
   st_stack_2->GetXaxis()->SetTitle("Gen Jet multiplicity");
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
   
   
   TH1D *GenJet_all_nGenJet_stack_1 = new TH1D("GenJet_all_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_1->SetBinContent(1,32866.48);
   GenJet_all_nGenJet_stack_1->SetBinContent(2,4.743411e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(3,1.181564e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(4,2.795318e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(5,3.0267e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(6,2.110765e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(7,1.20763e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(8,6.27675e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(9,3.089042e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(10,1.460852e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(11,6.73291e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(12,3.023656e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(13,1.32738e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(14,5.695195e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(15,2.415234e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(16,1.028361e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(17,4.300539e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(18,1.763323e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(19,6178209);
   GenJet_all_nGenJet_stack_1->SetBinContent(20,2391775);
   GenJet_all_nGenJet_stack_1->SetBinContent(21,1567054);
   GenJet_all_nGenJet_stack_1->SetBinError(1,24775.69);
   GenJet_all_nGenJet_stack_1->SetBinError(2,1029999);
   GenJet_all_nGenJet_stack_1->SetBinError(3,5.059888e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(4,7.765289e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(5,8.01026e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(6,6.599093e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(7,4.911279e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(8,3.483107e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(9,2.407028e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(10,1.63337e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(11,1.09665e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(12,7279511);
   GenJet_all_nGenJet_stack_1->SetBinError(13,4778784);
   GenJet_all_nGenJet_stack_1->SetBinError(14,3105772);
   GenJet_all_nGenJet_stack_1->SetBinError(15,2007360);
   GenJet_all_nGenJet_stack_1->SetBinError(16,1309217);
   GenJet_all_nGenJet_stack_1->SetBinError(17,843927.7);
   GenJet_all_nGenJet_stack_1->SetBinError(18,539062.1);
   GenJet_all_nGenJet_stack_1->SetBinError(19,304371.7);
   GenJet_all_nGenJet_stack_1->SetBinError(20,191355.1);
   GenJet_all_nGenJet_stack_1->SetBinError(21,156272.6);
   GenJet_all_nGenJet_stack_1->SetEntries(2.416594e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenJet_stack_1->SetFillColor(ci);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenJet_stack_1,"");
   
   TH1D *GenJet_all_nGenJet_stack_2 = new TH1D("GenJet_all_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_2->SetBinContent(1,2.632514);
   GenJet_all_nGenJet_stack_2->SetBinContent(2,311.0883);
   GenJet_all_nGenJet_stack_2->SetBinContent(3,10584.51);
   GenJet_all_nGenJet_stack_2->SetBinContent(4,137139.4);
   GenJet_all_nGenJet_stack_2->SetBinContent(5,806939.7);
   GenJet_all_nGenJet_stack_2->SetBinContent(6,2429633);
   GenJet_all_nGenJet_stack_2->SetBinContent(7,4396689);
   GenJet_all_nGenJet_stack_2->SetBinContent(8,5506620);
   GenJet_all_nGenJet_stack_2->SetBinContent(9,5332155);
   GenJet_all_nGenJet_stack_2->SetBinContent(10,4273218);
   GenJet_all_nGenJet_stack_2->SetBinContent(11,2966615);
   GenJet_all_nGenJet_stack_2->SetBinContent(12,1846635);
   GenJet_all_nGenJet_stack_2->SetBinContent(13,1055927);
   GenJet_all_nGenJet_stack_2->SetBinContent(14,564316.7);
   GenJet_all_nGenJet_stack_2->SetBinContent(15,286115);
   GenJet_all_nGenJet_stack_2->SetBinContent(16,138563.8);
   GenJet_all_nGenJet_stack_2->SetBinContent(17,64594.28);
   GenJet_all_nGenJet_stack_2->SetBinContent(18,29056.88);
   GenJet_all_nGenJet_stack_2->SetBinContent(19,12731.11);
   GenJet_all_nGenJet_stack_2->SetBinContent(20,5427.842);
   GenJet_all_nGenJet_stack_2->SetBinContent(21,3809.256);
   GenJet_all_nGenJet_stack_2->SetBinError(1,0.3361347);
   GenJet_all_nGenJet_stack_2->SetBinError(2,3.685666);
   GenJet_all_nGenJet_stack_2->SetBinError(3,21.71891);
   GenJet_all_nGenJet_stack_2->SetBinError(4,79.68911);
   GenJet_all_nGenJet_stack_2->SetBinError(5,199.7631);
   GenJet_all_nGenJet_stack_2->SetBinError(6,362.3883);
   GenJet_all_nGenJet_stack_2->SetBinError(7,507.3892);
   GenJet_all_nGenJet_stack_2->SetBinError(8,581.7133);
   GenJet_all_nGenJet_stack_2->SetBinError(9,581.3416);
   GenJet_all_nGenJet_stack_2->SetBinError(10,525.8013);
   GenJet_all_nGenJet_stack_2->SetBinError(11,441.163);
   GenJet_all_nGenJet_stack_2->SetBinError(12,349.7457);
   GenJet_all_nGenJet_stack_2->SetBinError(13,265.3624);
   GenJet_all_nGenJet_stack_2->SetBinError(14,194.4908);
   GenJet_all_nGenJet_stack_2->SetBinError(15,138.7417);
   GenJet_all_nGenJet_stack_2->SetBinError(16,96.6896);
   GenJet_all_nGenJet_stack_2->SetBinError(17,66.08484);
   GenJet_all_nGenJet_stack_2->SetBinError(18,44.3743);
   GenJet_all_nGenJet_stack_2->SetBinError(19,29.40199);
   GenJet_all_nGenJet_stack_2->SetBinError(20,19.21665);
   GenJet_all_nGenJet_stack_2->SetBinError(21,16.11625);
   GenJet_all_nGenJet_stack_2->SetEntries(5.194289e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenJet_stack_2->SetFillColor(ci);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenJet_stack_1","QCD","F");

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
   GenJet_all_nGenJet_bckg_16->Modified();
   GenJet_all_nGenJet_bckg_16->cd();
   GenJet_all_nGenJet_bckg_16->SetSelected(GenJet_all_nGenJet_bckg_16);
}
