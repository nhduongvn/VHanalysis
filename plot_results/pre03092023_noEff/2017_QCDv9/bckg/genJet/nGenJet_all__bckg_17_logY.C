#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenJet_all__bckg_17_logY()
{
//=========Macro generated from canvas: nGenJet_all__bckg_17/nGenJet_all__bckg_17
//=========  (Mon Mar  6 10:58:23 2023) by ROOT version 6.26/06
   TCanvas *nGenJet_all__bckg_17 = new TCanvas("nGenJet_all__bckg_17", "nGenJet_all__bckg_17",0,0,600,600);
   nGenJet_all__bckg_17->SetHighLightColor(2);
   nGenJet_all__bckg_17->Range(-3.775293,-0.6089949,17.0745,13.4432);
   nGenJet_all__bckg_17->SetFillColor(0);
   nGenJet_all__bckg_17->SetFillStyle(4000);
   nGenJet_all__bckg_17->SetBorderMode(0);
   nGenJet_all__bckg_17->SetBorderSize(2);
   nGenJet_all__bckg_17->SetLogy();
   nGenJet_all__bckg_17->SetLeftMargin(0.15709);
   nGenJet_all__bckg_17->SetRightMargin(0.1234783);
   nGenJet_all__bckg_17->SetBottomMargin(0.12);
   nGenJet_all__bckg_17->SetFrameFillStyle(1000);
   nGenJet_all__bckg_17->SetFrameBorderMode(0);
   nGenJet_all__bckg_17->SetFrameFillStyle(1000);
   nGenJet_all__bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(70.03272);
   
   TH1F *st_stack_4 = new TH1F("st_stack_4","",15,-0.5,14.5);
   st_stack_4->SetMinimum(11.94727);
   st_stack_4->SetMaximum(1.091394e+12);
   st_stack_4->SetDirectory(0);
   st_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_4->SetLineColor(ci);
   st_stack_4->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_4->GetXaxis()->SetLabelFont(42);
   st_stack_4->GetXaxis()->SetTitleOffset(1);
   st_stack_4->GetXaxis()->SetTitleFont(42);
   st_stack_4->GetYaxis()->SetTitle("Events/1.0");
   st_stack_4->GetYaxis()->SetLabelFont(42);
   st_stack_4->GetYaxis()->SetTitleSize(0.037);
   st_stack_4->GetYaxis()->SetTitleFont(42);
   st_stack_4->GetZaxis()->SetLabelFont(42);
   st_stack_4->GetZaxis()->SetTitleOffset(1);
   st_stack_4->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_4);
   
   
   TH1D *nGenJet_all_stack_1 = new TH1D("nGenJet_all_stack_1","",15,-0.5,14.5);
   nGenJet_all_stack_1->SetBinContent(1,70029.86);
   nGenJet_all_stack_1->SetBinContent(2,5.953061e+07);
   nGenJet_all_stack_1->SetBinContent(3,1.440857e+11);
   nGenJet_all_stack_1->SetBinContent(4,3.414856e+11);
   nGenJet_all_stack_1->SetBinContent(5,3.706257e+11);
   nGenJet_all_stack_1->SetBinContent(6,2.585686e+11);
   nGenJet_all_stack_1->SetBinContent(7,1.479768e+11);
   nGenJet_all_stack_1->SetBinContent(8,7.692969e+10);
   nGenJet_all_stack_1->SetBinContent(9,3.782988e+10);
   nGenJet_all_stack_1->SetBinContent(10,1.786364e+10);
   nGenJet_all_stack_1->SetBinContent(11,8.207763e+09);
   nGenJet_all_stack_1->SetBinContent(12,3.684676e+09);
   nGenJet_all_stack_1->SetBinContent(13,1.619479e+09);
   nGenJet_all_stack_1->SetBinContent(14,6.965032e+08);
   nGenJet_all_stack_1->SetBinContent(15,2.937355e+08);
   nGenJet_all_stack_1->SetBinContent(16,2.074205e+08);
   nGenJet_all_stack_1->SetBinError(1,35476.41);
   nGenJet_all_stack_1->SetBinError(2,1027925);
   nGenJet_all_stack_1->SetBinError(3,4.968605e+07);
   nGenJet_all_stack_1->SetBinError(4,7.637173e+07);
   nGenJet_all_stack_1->SetBinError(5,7.891033e+07);
   nGenJet_all_stack_1->SetBinError(6,6.505213e+07);
   nGenJet_all_stack_1->SetBinError(7,4.844804e+07);
   nGenJet_all_stack_1->SetBinError(8,3.438603e+07);
   nGenJet_all_stack_1->SetBinError(9,2.376406e+07);
   nGenJet_all_stack_1->SetBinError(10,1.612496e+07);
   nGenJet_all_stack_1->SetBinError(11,1.081213e+07);
   nGenJet_all_stack_1->SetBinError(12,7176006);
   nGenJet_all_stack_1->SetBinError(13,4718160);
   nGenJet_all_stack_1->SetBinError(14,3069347);
   nGenJet_all_stack_1->SetBinError(15,1980405);
   nGenJet_all_stack_1->SetBinError(16,1648459);
   nGenJet_all_stack_1->SetEntries(2.975996e+08);

   ci = TColor::GetColor("#ff6600");
   nGenJet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_all_stack_1->SetLineColor(ci);
   nGenJet_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenJet_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenJet_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenJet_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenJet_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenJet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_all_stack_1,"");
   
   TH1D *nGenJet_all_stack_2 = new TH1D("nGenJet_all_stack_2","",15,-0.5,14.5);
   nGenJet_all_stack_2->SetBinContent(1,2.859423);
   nGenJet_all_stack_2->SetBinContent(2,371.791);
   nGenJet_all_stack_2->SetBinContent(3,12888.02);
   nGenJet_all_stack_2->SetBinContent(4,166325.6);
   nGenJet_all_stack_2->SetBinContent(5,979140.9);
   nGenJet_all_stack_2->SetBinContent(6,2950538);
   nGenJet_all_stack_2->SetBinContent(7,5344214);
   nGenJet_all_stack_2->SetBinContent(8,6692550);
   nGenJet_all_stack_2->SetBinContent(9,6479796);
   nGenJet_all_stack_2->SetBinContent(10,5188933);
   nGenJet_all_stack_2->SetBinContent(11,3599716);
   nGenJet_all_stack_2->SetBinContent(12,2238958);
   nGenJet_all_stack_2->SetBinContent(13,1279895);
   nGenJet_all_stack_2->SetBinContent(14,683661.6);
   nGenJet_all_stack_2->SetBinContent(15,346006.6);
   nGenJet_all_stack_2->SetBinContent(16,307120.6);
   nGenJet_all_stack_2->SetBinError(1,0.3418158);
   nGenJet_all_stack_2->SetBinError(2,3.932192);
   nGenJet_all_stack_2->SetBinError(3,23.52212);
   nGenJet_all_stack_2->SetBinError(4,86.61635);
   nGenJet_all_stack_2->SetBinError(5,219.2312);
   nGenJet_all_stack_2->SetBinError(6,402.6067);
   nGenJet_all_stack_2->SetBinError(7,570.055);
   nGenJet_all_stack_2->SetBinError(8,657.5025);
   nGenJet_all_stack_2->SetBinError(9,659.4849);
   nGenJet_all_stack_2->SetBinError(10,597.6816);
   nGenJet_all_stack_2->SetBinError(11,502.0691);
   nGenJet_all_stack_2->SetBinError(12,398.2995);
   nGenJet_all_stack_2->SetBinError(13,302.3879);
   nGenJet_all_stack_2->SetBinError(14,221.6568);
   nGenJet_all_stack_2->SetBinError(15,158.0719);
   nGenJet_all_stack_2->SetBinError(16,149.3369);
   nGenJet_all_stack_2->SetEntries(6.301685e+08);

   ci = TColor::GetColor("#990099");
   nGenJet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_all_stack_2->SetLineColor(ci);
   nGenJet_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenJet_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenJet_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenJet_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenJet_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenJet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenJet_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("nGenJet_all_stack_1","QCD","F");

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
   nGenJet_all__bckg_17->Modified();
   nGenJet_all__bckg_17->cd();
   nGenJet_all__bckg_17->SetSelected(nGenJet_all__bckg_17);
}
