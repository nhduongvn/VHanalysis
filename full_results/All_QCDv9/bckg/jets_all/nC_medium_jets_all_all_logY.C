#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_all_logY()
{
//=========Macro generated from canvas: nC_medium_jets_all_all/nC_medium_jets_all_all
//=========  (Mon Dec 19 11:02:06 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_all = new TCanvas("nC_medium_jets_all_all", "nC_medium_jets_all_all",0,0,600,600);
   nC_medium_jets_all_all->SetHighLightColor(2);
   nC_medium_jets_all_all->Range(-2.683529,3.334178,11.21633,15.92273);
   nC_medium_jets_all_all->SetFillColor(0);
   nC_medium_jets_all_all->SetFillStyle(4000);
   nC_medium_jets_all_all->SetBorderMode(0);
   nC_medium_jets_all_all->SetBorderSize(2);
   nC_medium_jets_all_all->SetLogy();
   nC_medium_jets_all_all->SetLeftMargin(0.15709);
   nC_medium_jets_all_all->SetRightMargin(0.1234783);
   nC_medium_jets_all_all->SetBottomMargin(0.12);
   nC_medium_jets_all_all->SetFrameFillStyle(1000);
   nC_medium_jets_all_all->SetFrameBorderMode(0);
   nC_medium_jets_all_all->SetFrameFillStyle(1000);
   nC_medium_jets_all_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(372712.6);
   st->SetMaximum(1.688562e+14);
   
   TH1F *st_stack_128 = new TH1F("st_stack_128","",10,-0.5,9.5);
   st_stack_128->SetMinimum(69952.62);
   st_stack_128->SetMaximum(4.611848e+14);
   st_stack_128->SetDirectory(0);
   st_stack_128->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_128->SetLineColor(ci);
   st_stack_128->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_128->GetXaxis()->SetRange(1,10);
   st_stack_128->GetXaxis()->SetLabelFont(42);
   st_stack_128->GetXaxis()->SetTitleOffset(1);
   st_stack_128->GetXaxis()->SetTitleFont(42);
   st_stack_128->GetYaxis()->SetTitle("Events/1.0");
   st_stack_128->GetYaxis()->SetLabelFont(42);
   st_stack_128->GetYaxis()->SetTitleSize(0.037);
   st_stack_128->GetYaxis()->SetTitleFont(42);
   st_stack_128->GetZaxis()->SetLabelFont(42);
   st_stack_128->GetZaxis()->SetTitleOffset(1);
   st_stack_128->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_128);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(1,1.517092e+12);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(2,1.688532e+12);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(3,9.160022e+11);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(4,3.431966e+11);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(5,1.046408e+11);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(6,2.827584e+10);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(7,7.02601e+09);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(8,1.657403e+09);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(9,3.725572e+08);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(10,7.844115e+07);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinContent(11,2.074181e+07);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(1,1.876295e+08);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(2,1.924494e+08);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(3,1.375289e+08);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(4,8.155602e+07);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(5,4.383435e+07);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(6,2.225151e+07);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(7,1.087644e+07);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(8,5208796);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(9,2433254);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(10,1102534);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetBinError(11,557534.6);
   VbbHcc_jets_all_nC_medium_all_stack_1->SetEntries(8.490771e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nC_medium_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_all_stack_2 = new TH1D("VbbHcc_jets_all_nC_medium_all_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(1,1.229775e+07);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(2,2.934177e+07);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(3,3.332188e+07);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(4,2.418157e+07);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(5,1.27648e+07);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(6,5313313);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(7,1851242);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(8,563850.5);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(9,155413.3);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(10,39718.92);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinContent(11,12462.74);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(1,952.4993);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(2,1496.82);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(3,1613.177);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(4,1381.171);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(5,1003.459);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(6,644.8293);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(7,378.4957);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(8,207.3759);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(9,108.0372);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(10,54.22511);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetBinError(11,30.12063);
   VbbHcc_jets_all_nC_medium_all_stack_2->SetEntries(1.869087e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nC_medium_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_all_all->Modified();
   nC_medium_jets_all_all->cd();
   nC_medium_jets_all_all->SetSelected(nC_medium_jets_all_all);
}
