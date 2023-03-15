#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenJet_bckg_18_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenJet_bckg_18/GenJet_all_nGenJet_bckg_18
//=========  (Fri Mar 10 12:49:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenJet_bckg_18 = new TCanvas("GenJet_all_nGenJet_bckg_18", "GenJet_all_nGenJet_bckg_18",0,0,600,600);
   GenJet_all_nGenJet_bckg_18->SetHighLightColor(2);
   GenJet_all_nGenJet_bckg_18->Range(-4.867058,-2.866311,22.93266,14.02644);
   GenJet_all_nGenJet_bckg_18->SetFillColor(0);
   GenJet_all_nGenJet_bckg_18->SetFillStyle(4000);
   GenJet_all_nGenJet_bckg_18->SetBorderMode(0);
   GenJet_all_nGenJet_bckg_18->SetBorderSize(2);
   GenJet_all_nGenJet_bckg_18->SetLogy();
   GenJet_all_nGenJet_bckg_18->SetLeftMargin(0.15709);
   GenJet_all_nGenJet_bckg_18->SetRightMargin(0.1234783);
   GenJet_all_nGenJet_bckg_18->SetBottomMargin(0.12);
   GenJet_all_nGenJet_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_bckg_18->SetFrameBorderMode(0);
   GenJet_all_nGenJet_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(6.464714e+11);
   
   TH1F *st_stack_6 = new TH1F("st_stack_6","",20,-0.5,19.5);
   st_stack_6->SetMinimum(0.1448168);
   st_stack_6->SetMaximum(2.173508e+12);
   st_stack_6->SetDirectory(0);
   st_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_6->SetLineColor(ci);
   st_stack_6->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_6->GetXaxis()->SetLabelFont(42);
   st_stack_6->GetXaxis()->SetTitleOffset(1);
   st_stack_6->GetXaxis()->SetTitleFont(42);
   st_stack_6->GetYaxis()->SetTitle("Event/1.0");
   st_stack_6->GetYaxis()->SetLabelFont(42);
   st_stack_6->GetYaxis()->SetTitleSize(0.037);
   st_stack_6->GetYaxis()->SetTitleFont(42);
   st_stack_6->GetZaxis()->SetLabelFont(42);
   st_stack_6->GetZaxis()->SetTitleOffset(1);
   st_stack_6->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_6);
   
   
   TH1D *GenJet_all_nGenJet_stack_1 = new TH1D("GenJet_all_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_1->SetBinContent(1,91186.78);
   GenJet_all_nGenJet_stack_1->SetBinContent(2,8.48356e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(3,2.101549e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(4,4.962893e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(5,5.365698e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(6,3.742467e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(7,2.143802e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(8,1.113228e+11);
   GenJet_all_nGenJet_stack_1->SetBinContent(9,5.480985e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(10,2.593093e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(11,1.194678e+10);
   GenJet_all_nGenJet_stack_1->SetBinContent(12,5.344735e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(13,2.343227e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(14,1.017838e+09);
   GenJet_all_nGenJet_stack_1->SetBinContent(15,4.265955e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(16,1.792975e+08);
   GenJet_all_nGenJet_stack_1->SetBinContent(17,7.335818e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(18,2.990437e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(19,1.191338e+07);
   GenJet_all_nGenJet_stack_1->SetBinContent(20,4829634);
   GenJet_all_nGenJet_stack_1->SetBinContent(21,3198290);
   GenJet_all_nGenJet_stack_1->SetBinError(1,46020.21);
   GenJet_all_nGenJet_stack_1->SetBinError(2,1556012);
   GenJet_all_nGenJet_stack_1->SetBinError(3,7.926992e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(4,1.215163e+08);
   GenJet_all_nGenJet_stack_1->SetBinError(5,1.250416e+08);
   GenJet_all_nGenJet_stack_1->SetBinError(6,1.03004e+08);
   GenJet_all_nGenJet_stack_1->SetBinError(7,7.666217e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(8,5.423942e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(9,3.756989e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(10,2.547614e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(11,1.742184e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(12,1.155391e+07);
   GenJet_all_nGenJet_stack_1->SetBinError(13,7306898);
   GenJet_all_nGenJet_stack_1->SetBinError(14,4945046);
   GenJet_all_nGenJet_stack_1->SetBinError(15,3030230);
   GenJet_all_nGenJet_stack_1->SetBinError(16,2239217);
   GenJet_all_nGenJet_stack_1->SetBinError(17,1278389);
   GenJet_all_nGenJet_stack_1->SetBinError(18,873633);
   GenJet_all_nGenJet_stack_1->SetBinError(19,475944.4);
   GenJet_all_nGenJet_stack_1->SetBinError(20,305180.6);
   GenJet_all_nGenJet_stack_1->SetBinError(21,259716.8);
   GenJet_all_nGenJet_stack_1->SetEntries(3.062923e+08);

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
   GenJet_all_nGenJet_stack_2->SetBinContent(1,4.773472);
   GenJet_all_nGenJet_stack_2->SetBinContent(2,532.3465);
   GenJet_all_nGenJet_stack_2->SetBinContent(3,18784.3);
   GenJet_all_nGenJet_stack_2->SetBinContent(4,244737.8);
   GenJet_all_nGenJet_stack_2->SetBinContent(5,1442349);
   GenJet_all_nGenJet_stack_2->SetBinContent(6,4351689);
   GenJet_all_nGenJet_stack_2->SetBinContent(7,7884097);
   GenJet_all_nGenJet_stack_2->SetBinContent(8,9883207);
   GenJet_all_nGenJet_stack_2->SetBinContent(9,9587227);
   GenJet_all_nGenJet_stack_2->SetBinContent(10,7695278);
   GenJet_all_nGenJet_stack_2->SetBinContent(11,5353534);
   GenJet_all_nGenJet_stack_2->SetBinContent(12,3338024);
   GenJet_all_nGenJet_stack_2->SetBinContent(13,1911725);
   GenJet_all_nGenJet_stack_2->SetBinContent(14,1024653);
   GenJet_all_nGenJet_stack_2->SetBinContent(15,519930.2);
   GenJet_all_nGenJet_stack_2->SetBinContent(16,252113.4);
   GenJet_all_nGenJet_stack_2->SetBinContent(17,117741.3);
   GenJet_all_nGenJet_stack_2->SetBinContent(18,53042.41);
   GenJet_all_nGenJet_stack_2->SetBinContent(19,23268.73);
   GenJet_all_nGenJet_stack_2->SetBinContent(20,9924.962);
   GenJet_all_nGenJet_stack_2->SetBinContent(21,6914.054);
   GenJet_all_nGenJet_stack_2->SetBinError(1,0.462115);
   GenJet_all_nGenJet_stack_2->SetBinError(2,5.014061);
   GenJet_all_nGenJet_stack_2->SetBinError(3,31.68649);
   GenJet_all_nGenJet_stack_2->SetBinError(4,117.4082);
   GenJet_all_nGenJet_stack_2->SetBinError(5,294.3132);
   GenJet_all_nGenJet_stack_2->SetBinError(6,536.9418);
   GenJet_all_nGenJet_stack_2->SetBinError(7,755.0953);
   GenJet_all_nGenJet_stack_2->SetBinError(8,867.8458);
   GenJet_all_nGenJet_stack_2->SetBinError(9,869.5774);
   GenJet_all_nGenJet_stack_2->SetBinError(10,788.6738);
   GenJet_all_nGenJet_stack_2->SetBinError(11,663.252);
   GenJet_all_nGenJet_stack_2->SetBinError(12,527.1629);
   GenJet_all_nGenJet_stack_2->SetBinError(13,400.0629);
   GenJet_all_nGenJet_stack_2->SetBinError(14,294.2485);
   GenJet_all_nGenJet_stack_2->SetBinError(15,210.7063);
   GenJet_all_nGenJet_stack_2->SetBinError(16,147.3726);
   GenJet_all_nGenJet_stack_2->SetBinError(17,100.6362);
   GenJet_all_nGenJet_stack_2->SetBinError(18,67.2842);
   GenJet_all_nGenJet_stack_2->SetBinError(19,44.26139);
   GenJet_all_nGenJet_stack_2->SetBinError(20,29.67659);
   GenJet_all_nGenJet_stack_2->SetBinError(21,24.33247);
   GenJet_all_nGenJet_stack_2->SetEntries(8.938066e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenJet_bckg_18->Modified();
   GenJet_all_nGenJet_bckg_18->cd();
   GenJet_all_nGenJet_bckg_18->SetSelected(GenJet_all_nGenJet_bckg_18);
}
