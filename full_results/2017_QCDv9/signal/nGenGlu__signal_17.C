#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenGlu__signal_17()
{
//=========Macro generated from canvas: nGenGlu__signal_17/nGenGlu__signal_17
//=========  (Fri Mar  3 13:54:53 2023) by ROOT version 6.26/06
   TCanvas *nGenGlu__signal_17 = new TCanvas("nGenGlu__signal_17", "nGenGlu__signal_17",0,0,600,600);
   nGenGlu__signal_17->SetHighLightColor(2);
   nGenGlu__signal_17->Range(-2.683529,-10.54796,11.21633,77.35174);
   nGenGlu__signal_17->SetFillColor(0);
   nGenGlu__signal_17->SetFillStyle(4000);
   nGenGlu__signal_17->SetBorderMode(0);
   nGenGlu__signal_17->SetBorderSize(2);
   nGenGlu__signal_17->SetLeftMargin(0.15709);
   nGenGlu__signal_17->SetRightMargin(0.1234783);
   nGenGlu__signal_17->SetBottomMargin(0.12);
   nGenGlu__signal_17->SetFrameFillStyle(1000);
   nGenGlu__signal_17->SetFrameBorderMode(0);
   nGenGlu__signal_17->SetFrameFillStyle(1000);
   nGenGlu__signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_27 = new TH1F("st_stack_27","",10,-0.5,9.5);
   st_stack_27->SetMinimum(0);
   st_stack_27->SetMaximum(68.56177);
   st_stack_27->SetDirectory(0);
   st_stack_27->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_27->SetLineColor(ci);
   st_stack_27->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_27->GetXaxis()->SetLabelFont(42);
   st_stack_27->GetXaxis()->SetTitleOffset(1);
   st_stack_27->GetXaxis()->SetTitleFont(42);
   st_stack_27->GetYaxis()->SetTitle("Events/1.0");
   st_stack_27->GetYaxis()->SetLabelFont(42);
   st_stack_27->GetYaxis()->SetTitleSize(0.037);
   st_stack_27->GetYaxis()->SetTitleFont(42);
   st_stack_27->GetZaxis()->SetLabelFont(42);
   st_stack_27->GetZaxis()->SetTitleOffset(1);
   st_stack_27->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_27);
   
   
   TH1D *nGenGlu_stack_1 = new TH1D("nGenGlu_stack_1","",10,-0.5,9.5);
   nGenGlu_stack_1->SetBinContent(1,58.03989);
   nGenGlu_stack_1->SetBinContent(2,58.10707);
   nGenGlu_stack_1->SetBinContent(3,35.24466);
   nGenGlu_stack_1->SetBinContent(4,16.86145);
   nGenGlu_stack_1->SetBinContent(5,7.287438);
   nGenGlu_stack_1->SetBinContent(6,2.770366);
   nGenGlu_stack_1->SetBinContent(7,1.006239);
   nGenGlu_stack_1->SetBinContent(8,0.3306866);
   nGenGlu_stack_1->SetBinContent(9,0.1265468);
   nGenGlu_stack_1->SetBinContent(10,0.03493716);
   nGenGlu_stack_1->SetBinContent(11,0.009288994);
   nGenGlu_stack_1->SetBinError(1,0.34466);
   nGenGlu_stack_1->SetBinError(2,0.3360793);
   nGenGlu_stack_1->SetBinError(3,0.2582868);
   nGenGlu_stack_1->SetBinError(4,0.1770903);
   nGenGlu_stack_1->SetBinError(5,0.1165492);
   nGenGlu_stack_1->SetBinError(6,0.07145152);
   nGenGlu_stack_1->SetBinError(7,0.04306156);
   nGenGlu_stack_1->SetBinError(8,0.02444877);
   nGenGlu_stack_1->SetBinError(9,0.01503464);
   nGenGlu_stack_1->SetBinError(10,0.0078317);
   nGenGlu_stack_1->SetBinError(11,0.004165591);
   nGenGlu_stack_1->SetEntries(109542);

   ci = TColor::GetColor("#cc0000");
   nGenGlu_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenGlu_stack_1->SetLineColor(ci);
   nGenGlu_stack_1->GetXaxis()->SetRange(1,10);
   nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenGlu_stack_1,"");
   
   TH1D *nGenGlu_stack_2 = new TH1D("nGenGlu_stack_2","",10,-0.5,9.5);
   nGenGlu_stack_2->SetBinContent(1,4.198531);
   nGenGlu_stack_2->SetBinContent(2,7.189854);
   nGenGlu_stack_2->SetBinContent(3,6.264338);
   nGenGlu_stack_2->SetBinContent(4,3.94997);
   nGenGlu_stack_2->SetBinContent(5,1.930861);
   nGenGlu_stack_2->SetBinContent(6,0.8352468);
   nGenGlu_stack_2->SetBinContent(7,0.3172268);
   nGenGlu_stack_2->SetBinContent(8,0.1017778);
   nGenGlu_stack_2->SetBinContent(9,0.03266466);
   nGenGlu_stack_2->SetBinContent(10,0.01051363);
   nGenGlu_stack_2->SetBinContent(11,0.007110374);
   nGenGlu_stack_2->SetBinError(1,0.03178141);
   nGenGlu_stack_2->SetBinError(2,0.04157731);
   nGenGlu_stack_2->SetBinError(3,0.03880186);
   nGenGlu_stack_2->SetBinError(4,0.03076071);
   nGenGlu_stack_2->SetBinError(5,0.02152015);
   nGenGlu_stack_2->SetBinError(6,0.01416081);
   nGenGlu_stack_2->SetBinError(7,0.0087495);
   nGenGlu_stack_2->SetBinError(8,0.004936602);
   nGenGlu_stack_2->SetBinError(9,0.002789176);
   nGenGlu_stack_2->SetBinError(10,0.001594509);
   nGenGlu_stack_2->SetBinError(11,0.001339363);
   nGenGlu_stack_2->SetEntries(108038);

   ci = TColor::GetColor("#00cc00");
   nGenGlu_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenGlu_stack_2->SetLineColor(ci);
   nGenGlu_stack_2->GetXaxis()->SetRange(1,10);
   nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenGlu_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenGlu_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenGlu__signal_17->Modified();
   nGenGlu__signal_17->cd();
   nGenGlu__signal_17->SetSelected(nGenGlu__signal_17);
}
