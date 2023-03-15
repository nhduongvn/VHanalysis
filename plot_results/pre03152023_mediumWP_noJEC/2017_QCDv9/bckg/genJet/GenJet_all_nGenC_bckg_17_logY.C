#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenC_bckg_17_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenC_bckg_17/GenJet_all_nGenC_bckg_17
//=========  (Thu Mar  9 15:52:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenC_bckg_17 = new TCanvas("GenJet_all_nGenC_bckg_17", "GenJet_all_nGenC_bckg_17",0,0,600,600);
   GenJet_all_nGenC_bckg_17->SetHighLightColor(2);
   GenJet_all_nGenC_bckg_17->Range(-4.867058,-2.927535,22.93266,14.3935);
   GenJet_all_nGenC_bckg_17->SetFillColor(0);
   GenJet_all_nGenC_bckg_17->SetFillStyle(4000);
   GenJet_all_nGenC_bckg_17->SetBorderMode(0);
   GenJet_all_nGenC_bckg_17->SetBorderSize(2);
   GenJet_all_nGenC_bckg_17->SetLogy();
   GenJet_all_nGenC_bckg_17->SetLeftMargin(0.15709);
   GenJet_all_nGenC_bckg_17->SetRightMargin(0.1234783);
   GenJet_all_nGenC_bckg_17->SetBottomMargin(0.12);
   GenJet_all_nGenC_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenC_bckg_17->SetFrameBorderMode(0);
   GenJet_all_nGenC_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenC_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(1.338737e+12);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",20,-0.5,19.5);
   st_stack_22->SetMinimum(0.1415759);
   st_stack_22->SetMaximum(4.585628e+12);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Event/1.0");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *GenJet_all_nGenC_stack_1 = new TH1D("GenJet_all_nGenC_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenC_stack_1->SetBinContent(1,1.111138e+12);
   GenJet_all_nGenC_stack_1->SetBinContent(2,2.151894e+11);
   GenJet_all_nGenC_stack_1->SetBinContent(3,7.165184e+10);
   GenJet_all_nGenC_stack_1->SetBinContent(4,1.03113e+10);
   GenJet_all_nGenC_stack_1->SetBinContent(5,1.624746e+09);
   GenJet_all_nGenC_stack_1->SetBinContent(6,2.002531e+08);
   GenJet_all_nGenC_stack_1->SetBinContent(7,2.462408e+07);
   GenJet_all_nGenC_stack_1->SetBinContent(8,2725319);
   GenJet_all_nGenC_stack_1->SetBinContent(9,316144.9);
   GenJet_all_nGenC_stack_1->SetBinContent(10,11256.25);
   GenJet_all_nGenC_stack_1->SetBinContent(11,957.2107);
   GenJet_all_nGenC_stack_1->SetBinContent(12,0.4762869);
   GenJet_all_nGenC_stack_1->SetBinError(1,1.339792e+08);
   GenJet_all_nGenC_stack_1->SetBinError(2,5.858872e+07);
   GenJet_all_nGenC_stack_1->SetBinError(3,3.352611e+07);
   GenJet_all_nGenC_stack_1->SetBinError(4,1.256726e+07);
   GenJet_all_nGenC_stack_1->SetBinError(5,4909932);
   GenJet_all_nGenC_stack_1->SetBinError(6,1695999);
   GenJet_all_nGenC_stack_1->SetBinError(7,583921.8);
   GenJet_all_nGenC_stack_1->SetBinError(8,191281.4);
   GenJet_all_nGenC_stack_1->SetBinError(9,63393.45);
   GenJet_all_nGenC_stack_1->SetBinError(10,3238.444);
   GenJet_all_nGenC_stack_1->SetBinError(11,500.6337);
   GenJet_all_nGenC_stack_1->SetBinError(12,0.4762869);
   GenJet_all_nGenC_stack_1->SetEntries(3.060973e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenC_stack_1->SetFillColor(ci);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenC_stack_1,"");
   
   TH1D *GenJet_all_nGenC_stack_2 = new TH1D("GenJet_all_nGenC_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenC_stack_2->SetBinContent(1,1.403366e+07);
   GenJet_all_nGenC_stack_2->SetBinContent(2,1.50618e+07);
   GenJet_all_nGenC_stack_2->SetBinContent(3,5725017);
   GenJet_all_nGenC_stack_2->SetBinContent(4,1178893);
   GenJet_all_nGenC_stack_2->SetBinContent(5,227153);
   GenJet_all_nGenC_stack_2->SetBinContent(6,37003.16);
   GenJet_all_nGenC_stack_2->SetBinContent(7,5681.387);
   GenJet_all_nGenC_stack_2->SetBinContent(8,825.3987);
   GenJet_all_nGenC_stack_2->SetBinContent(9,112.9182);
   GenJet_all_nGenC_stack_2->SetBinContent(10,13.36888);
   GenJet_all_nGenC_stack_2->SetBinContent(11,1.616506);
   GenJet_all_nGenC_stack_2->SetBinContent(12,0.2289361);
   GenJet_all_nGenC_stack_2->SetBinError(1,909.1821);
   GenJet_all_nGenC_stack_2->SetBinError(2,1012.164);
   GenJet_all_nGenC_stack_2->SetBinError(3,660.0078);
   GenJet_all_nGenC_stack_2->SetBinError(4,299.3572);
   GenJet_all_nGenC_stack_2->SetBinError(5,132.4614);
   GenJet_all_nGenC_stack_2->SetBinError(6,53.52653);
   GenJet_all_nGenC_stack_2->SetBinError(7,21.01368);
   GenJet_all_nGenC_stack_2->SetBinError(8,8.008634);
   GenJet_all_nGenC_stack_2->SetBinError(9,2.97452);
   GenJet_all_nGenC_stack_2->SetBinError(10,1.020821);
   GenJet_all_nGenC_stack_2->SetBinError(11,0.3525967);
   GenJet_all_nGenC_stack_2->SetBinError(12,0.1335033);
   GenJet_all_nGenC_stack_2->SetEntries(6.227592e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenC_stack_2->SetFillColor(ci);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenC_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenC_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenC_bckg_17->Modified();
   GenJet_all_nGenC_bckg_17->cd();
   GenJet_all_nGenC_bckg_17->SetSelected(GenJet_all_nGenC_bckg_17);
}
