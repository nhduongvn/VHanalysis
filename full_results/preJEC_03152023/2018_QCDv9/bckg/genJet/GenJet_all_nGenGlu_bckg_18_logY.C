#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenGlu_bckg_18_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenGlu_bckg_18/GenJet_all_nGenGlu_bckg_18
//=========  (Thu Mar  9 15:52:22 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenGlu_bckg_18 = new TCanvas("GenJet_all_nGenGlu_bckg_18", "GenJet_all_nGenGlu_bckg_18",0,0,600,600);
   GenJet_all_nGenGlu_bckg_18->SetHighLightColor(2);
   GenJet_all_nGenGlu_bckg_18->Range(-4.867058,-2.865443,22.93266,14.02125);
   GenJet_all_nGenGlu_bckg_18->SetFillColor(0);
   GenJet_all_nGenGlu_bckg_18->SetFillStyle(4000);
   GenJet_all_nGenGlu_bckg_18->SetBorderMode(0);
   GenJet_all_nGenGlu_bckg_18->SetBorderSize(2);
   GenJet_all_nGenGlu_bckg_18->SetLogy();
   GenJet_all_nGenGlu_bckg_18->SetLeftMargin(0.15709);
   GenJet_all_nGenGlu_bckg_18->SetRightMargin(0.1234783);
   GenJet_all_nGenGlu_bckg_18->SetBottomMargin(0.12);
   GenJet_all_nGenGlu_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_bckg_18->SetFrameBorderMode(0);
   GenJet_all_nGenGlu_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(6.398564e+11);
   
   TH1F *st_stack_30 = new TH1F("st_stack_30","",20,-0.5,19.5);
   st_stack_30->SetMinimum(0.1448637);
   st_stack_30->SetMaximum(2.150696e+12);
   st_stack_30->SetDirectory(0);
   st_stack_30->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_30->SetLineColor(ci);
   st_stack_30->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_30->GetXaxis()->SetLabelFont(42);
   st_stack_30->GetXaxis()->SetTitleOffset(1);
   st_stack_30->GetXaxis()->SetTitleFont(42);
   st_stack_30->GetYaxis()->SetTitle("Event/1.0");
   st_stack_30->GetYaxis()->SetLabelFont(42);
   st_stack_30->GetYaxis()->SetTitleSize(0.037);
   st_stack_30->GetYaxis()->SetTitleFont(42);
   st_stack_30->GetZaxis()->SetLabelFont(42);
   st_stack_30->GetZaxis()->SetTitleOffset(1);
   st_stack_30->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_30);
   
   
   TH1D *GenJet_all_nGenGlu_stack_1 = new TH1D("GenJet_all_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_1->SetBinContent(1,7.169682e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(2,2.884523e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(3,5.094674e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(4,5.310721e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(5,3.586915e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(6,1.748728e+11);
   GenJet_all_nGenGlu_stack_1->SetBinContent(7,7.143288e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(8,2.620806e+10);
   GenJet_all_nGenGlu_stack_1->SetBinContent(9,9.00969e+09);
   GenJet_all_nGenGlu_stack_1->SetBinContent(10,2.936472e+09);
   GenJet_all_nGenGlu_stack_1->SetBinContent(11,9.168776e+08);
   GenJet_all_nGenGlu_stack_1->SetBinContent(12,2.764181e+08);
   GenJet_all_nGenGlu_stack_1->SetBinContent(13,8.287914e+07);
   GenJet_all_nGenGlu_stack_1->SetBinContent(14,2.339125e+07);
   GenJet_all_nGenGlu_stack_1->SetBinContent(15,6426524);
   GenJet_all_nGenGlu_stack_1->SetBinContent(16,1674170);
   GenJet_all_nGenGlu_stack_1->SetBinContent(17,463076);
   GenJet_all_nGenGlu_stack_1->SetBinContent(18,111931.8);
   GenJet_all_nGenGlu_stack_1->SetBinContent(19,19823.62);
   GenJet_all_nGenGlu_stack_1->SetBinContent(20,5641.717);
   GenJet_all_nGenGlu_stack_1->SetBinContent(21,800.8507);
   GenJet_all_nGenGlu_stack_1->SetBinError(1,4.542281e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(2,9.136201e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(3,1.21042e+08);
   GenJet_all_nGenGlu_stack_1->SetBinError(4,1.228918e+08);
   GenJet_all_nGenGlu_stack_1->SetBinError(5,9.990172e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(6,6.86381e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(7,4.295427e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(8,2.527212e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(9,1.439607e+07);
   GenJet_all_nGenGlu_stack_1->SetBinError(10,8278500);
   GenJet_all_nGenGlu_stack_1->SetBinError(11,4489890);
   GenJet_all_nGenGlu_stack_1->SetBinError(12,2305523);
   GenJet_all_nGenGlu_stack_1->SetBinError(13,1293252);
   GenJet_all_nGenGlu_stack_1->SetBinError(14,679459.4);
   GenJet_all_nGenGlu_stack_1->SetBinError(15,317212.8);
   GenJet_all_nGenGlu_stack_1->SetBinError(16,148331.9);
   GenJet_all_nGenGlu_stack_1->SetBinError(17,105053.5);
   GenJet_all_nGenGlu_stack_1->SetBinError(18,34574.76);
   GenJet_all_nGenGlu_stack_1->SetBinError(19,5030.741);
   GenJet_all_nGenGlu_stack_1->SetBinError(20,2941.306);
   GenJet_all_nGenGlu_stack_1->SetBinError(21,412.5095);
   GenJet_all_nGenGlu_stack_1->SetEntries(3.050092e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenGlu_stack_1->SetFillColor(ci);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenGlu_stack_1,"");
   
   TH1D *GenJet_all_nGenGlu_stack_2 = new TH1D("GenJet_all_nGenGlu_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_2->SetBinContent(1,8901319);
   GenJet_all_nGenGlu_stack_2->SetBinContent(2,1.4716e+07);
   GenJet_all_nGenGlu_stack_2->SetBinContent(3,1.322823e+07);
   GenJet_all_nGenGlu_stack_2->SetBinContent(4,8683107);
   GenJet_all_nGenGlu_stack_2->SetBinContent(5,4641376);
   GenJet_all_nGenGlu_stack_2->SetBinContent(6,2145007);
   GenJet_all_nGenGlu_stack_2->SetBinContent(7,887922.2);
   GenJet_all_nGenGlu_stack_2->SetBinContent(8,337446.6);
   GenJet_all_nGenGlu_stack_2->SetBinContent(9,119854.7);
   GenJet_all_nGenGlu_stack_2->SetBinContent(10,40005.69);
   GenJet_all_nGenGlu_stack_2->SetBinContent(11,12806.99);
   GenJet_all_nGenGlu_stack_2->SetBinContent(12,3907.313);
   GenJet_all_nGenGlu_stack_2->SetBinContent(13,1144.584);
   GenJet_all_nGenGlu_stack_2->SetBinContent(14,320.8109);
   GenJet_all_nGenGlu_stack_2->SetBinContent(15,91.22187);
   GenJet_all_nGenGlu_stack_2->SetBinContent(16,22.51502);
   GenJet_all_nGenGlu_stack_2->SetBinContent(17,5.401002);
   GenJet_all_nGenGlu_stack_2->SetBinContent(18,1.605141);
   GenJet_all_nGenGlu_stack_2->SetBinContent(19,0.4430111);
   GenJet_all_nGenGlu_stack_2->SetBinContent(20,0.03228612);
   GenJet_all_nGenGlu_stack_2->SetBinError(1,828.1282);
   GenJet_all_nGenGlu_stack_2->SetBinError(2,1069.757);
   GenJet_all_nGenGlu_stack_2->SetBinError(3,1017.505);
   GenJet_all_nGenGlu_stack_2->SetBinError(4,825.3788);
   GenJet_all_nGenGlu_stack_2->SetBinError(5,604.4453);
   GenJet_all_nGenGlu_stack_2->SetBinError(6,411.013);
   GenJet_all_nGenGlu_stack_2->SetBinError(7,263.7668);
   GenJet_all_nGenGlu_stack_2->SetBinError(8,163.0363);
   GenJet_all_nGenGlu_stack_2->SetBinError(9,97.16092);
   GenJet_all_nGenGlu_stack_2->SetBinError(10,56.26956);
   GenJet_all_nGenGlu_stack_2->SetBinError(11,31.85114);
   GenJet_all_nGenGlu_stack_2->SetBinError(12,17.75589);
   GenJet_all_nGenGlu_stack_2->SetBinError(13,9.372161);
   GenJet_all_nGenGlu_stack_2->SetBinError(14,5.126173);
   GenJet_all_nGenGlu_stack_2->SetBinError(15,2.626256);
   GenJet_all_nGenGlu_stack_2->SetBinError(16,1.235572);
   GenJet_all_nGenGlu_stack_2->SetBinError(17,0.6480771);
   GenJet_all_nGenGlu_stack_2->SetBinError(18,0.3328032);
   GenJet_all_nGenGlu_stack_2->SetBinError(19,0.1495159);
   GenJet_all_nGenGlu_stack_2->SetBinError(20,0.03228612);
   GenJet_all_nGenGlu_stack_2->SetEntries(8.848938e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenGlu_stack_2->SetFillColor(ci);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenGlu_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenGlu_stack_1","QCD","F");

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
   GenJet_all_nGenGlu_bckg_18->Modified();
   GenJet_all_nGenGlu_bckg_18->cd();
   GenJet_all_nGenGlu_bckg_18->SetSelected(GenJet_all_nGenGlu_bckg_18);
}
