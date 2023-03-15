#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenGlu_all__bckg_17()
{
//=========Macro generated from canvas: nGenGlu_all__bckg_17/nGenGlu_all__bckg_17
//=========  (Mon Mar  6 10:53:08 2023) by ROOT version 6.26/06
   TCanvas *nGenGlu_all__bckg_17 = new TCanvas("nGenGlu_all__bckg_17", "nGenGlu_all__bckg_17",0,0,600,600);
   nGenGlu_all__bckg_17->SetHighLightColor(2);
   nGenGlu_all__bckg_17->Range(-3.775293,-5.916593e+10,17.0745,4.338835e+11);
   nGenGlu_all__bckg_17->SetFillColor(0);
   nGenGlu_all__bckg_17->SetFillStyle(4000);
   nGenGlu_all__bckg_17->SetBorderMode(0);
   nGenGlu_all__bckg_17->SetBorderSize(2);
   nGenGlu_all__bckg_17->SetLeftMargin(0.15709);
   nGenGlu_all__bckg_17->SetRightMargin(0.1234783);
   nGenGlu_all__bckg_17->SetBottomMargin(0.12);
   nGenGlu_all__bckg_17->SetFrameFillStyle(1000);
   nGenGlu_all__bckg_17->SetFrameBorderMode(0);
   nGenGlu_all__bckg_17->SetFrameFillStyle(1000);
   nGenGlu_all__bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_28 = new TH1F("st_stack_28","",15,-0.5,14.5);
   st_stack_28->SetMinimum(0);
   st_stack_28->SetMaximum(3.845786e+11);
   st_stack_28->SetDirectory(0);
   st_stack_28->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_28->SetLineColor(ci);
   st_stack_28->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_28->GetXaxis()->SetLabelFont(42);
   st_stack_28->GetXaxis()->SetTitleOffset(1);
   st_stack_28->GetXaxis()->SetTitleFont(42);
   st_stack_28->GetYaxis()->SetTitle("Events/1.0");
   st_stack_28->GetYaxis()->SetLabelFont(42);
   st_stack_28->GetYaxis()->SetTitleSize(0.037);
   st_stack_28->GetYaxis()->SetTitleFont(42);
   st_stack_28->GetZaxis()->SetLabelFont(42);
   st_stack_28->GetZaxis()->SetTitleOffset(1);
   st_stack_28->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_28);
   
   
   TH1D *nGenGlu_all_stack_1 = new TH1D("nGenGlu_all_stack_1","",15,-0.5,14.5);
   nGenGlu_all_stack_1->SetBinContent(1,4.918262e+10);
   nGenGlu_all_stack_1->SetBinContent(2,1.97336e+11);
   nGenGlu_all_stack_1->SetBinContent(3,3.50971e+11);
   nGenGlu_all_stack_1->SetBinContent(4,3.662594e+11);
   nGenGlu_all_stack_1->SetBinContent(5,2.482902e+11);
   nGenGlu_all_stack_1->SetBinContent(6,1.212415e+11);
   nGenGlu_all_stack_1->SetBinContent(7,4.950036e+10);
   nGenGlu_all_stack_1->SetBinContent(8,1.819519e+10);
   nGenGlu_all_stack_1->SetBinContent(9,6.227629e+09);
   nGenGlu_all_stack_1->SetBinContent(10,2.031306e+09);
   nGenGlu_all_stack_1->SetBinContent(11,6.317081e+08);
   nGenGlu_all_stack_1->SetBinContent(12,1.921214e+08);
   nGenGlu_all_stack_1->SetBinContent(13,5.495437e+07);
   nGenGlu_all_stack_1->SetBinContent(14,1.490487e+07);
   nGenGlu_all_stack_1->SetBinContent(15,4158030);
   nGenGlu_all_stack_1->SetBinContent(16,1647784);
   nGenGlu_all_stack_1->SetBinError(1,2.872378e+07);
   nGenGlu_all_stack_1->SetBinError(2,5.767409e+07);
   nGenGlu_all_stack_1->SetBinError(3,7.689451e+07);
   nGenGlu_all_stack_1->SetBinError(4,7.822649e+07);
   nGenGlu_all_stack_1->SetBinError(5,6.37972e+07);
   nGenGlu_all_stack_1->SetBinError(6,4.387637e+07);
   nGenGlu_all_stack_1->SetBinError(7,2.746821e+07);
   nGenGlu_all_stack_1->SetBinError(8,1.627238e+07);
   nGenGlu_all_stack_1->SetBinError(9,9286947);
   nGenGlu_all_stack_1->SetBinError(10,5175488);
   nGenGlu_all_stack_1->SetBinError(11,2813041);
   nGenGlu_all_stack_1->SetBinError(12,1515172);
   nGenGlu_all_stack_1->SetBinError(13,788618.5);
   nGenGlu_all_stack_1->SetBinError(14,396733.6);
   nGenGlu_all_stack_1->SetBinError(15,206932.8);
   nGenGlu_all_stack_1->SetBinError(16,127119.1);
   nGenGlu_all_stack_1->SetEntries(2.975996e+08);

   ci = TColor::GetColor("#ff6600");
   nGenGlu_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenGlu_all_stack_1->SetLineColor(ci);
   nGenGlu_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenGlu_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenGlu_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenGlu_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenGlu_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenGlu_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenGlu_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenGlu_all_stack_1,"");
   
   TH1D *nGenGlu_all_stack_2 = new TH1D("nGenGlu_all_stack_2","",15,-0.5,14.5);
   nGenGlu_all_stack_2->SetBinContent(1,6016380);
   nGenGlu_all_stack_2->SetBinContent(2,9953771);
   nGenGlu_all_stack_2->SetBinContent(3,8938776);
   nGenGlu_all_stack_2->SetBinContent(4,5856501);
   nGenGlu_all_stack_2->SetBinContent(5,3124795);
   nGenGlu_all_stack_2->SetBinContent(6,1440211);
   nGenGlu_all_stack_2->SetBinContent(7,595228.4);
   nGenGlu_all_stack_2->SetBinContent(8,225875);
   nGenGlu_all_stack_2->SetBinContent(9,79885.14);
   nGenGlu_all_stack_2->SetBinContent(10,26595.18);
   nGenGlu_all_stack_2->SetBinContent(11,8461.579);
   nGenGlu_all_stack_2->SetBinContent(12,2585.116);
   nGenGlu_all_stack_2->SetBinContent(13,761.4129);
   nGenGlu_all_stack_2->SetBinContent(14,212.8175);
   nGenGlu_all_stack_2->SetBinContent(15,58.66983);
   nGenGlu_all_stack_2->SetBinContent(16,19.75757);
   nGenGlu_all_stack_2->SetBinError(1,623.0542);
   nGenGlu_all_stack_2->SetBinError(2,805.0142);
   nGenGlu_all_stack_2->SetBinError(3,764.7579);
   nGenGlu_all_stack_2->SetBinError(4,619.724);
   nGenGlu_all_stack_2->SetBinError(5,452.8599);
   nGenGlu_all_stack_2->SetBinError(6,307.3781);
   nGenGlu_all_stack_2->SetBinError(7,197.4762);
   nGenGlu_all_stack_2->SetBinError(8,121.5307);
   nGenGlu_all_stack_2->SetBinError(9,72.20795);
   nGenGlu_all_stack_2->SetBinError(10,41.60821);
   nGenGlu_all_stack_2->SetBinError(11,23.42903);
   nGenGlu_all_stack_2->SetBinError(12,12.94142);
   nGenGlu_all_stack_2->SetBinError(13,7.009769);
   nGenGlu_all_stack_2->SetBinError(14,3.680222);
   nGenGlu_all_stack_2->SetBinError(15,1.941519);
   nGenGlu_all_stack_2->SetBinError(16,1.104374);
   nGenGlu_all_stack_2->SetEntries(6.301685e+08);

   ci = TColor::GetColor("#990099");
   nGenGlu_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenGlu_all_stack_2->SetLineColor(ci);
   nGenGlu_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenGlu_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenGlu_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenGlu_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenGlu_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenGlu_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenGlu_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenGlu_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenGlu_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("nGenGlu_all_stack_1","QCD","F");

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
   nGenGlu_all__bckg_17->Modified();
   nGenGlu_all__bckg_17->cd();
   nGenGlu_all__bckg_17->SetSelected(nGenGlu_all__bckg_17);
}
