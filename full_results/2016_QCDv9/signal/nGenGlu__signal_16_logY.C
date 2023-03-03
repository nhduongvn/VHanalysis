#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenGlu__signal_16_logY()
{
//=========Macro generated from canvas: nGenGlu__signal_16/nGenGlu__signal_16
//=========  (Fri Mar  3 13:54:36 2023) by ROOT version 6.26/06
   TCanvas *nGenGlu__signal_16 = new TCanvas("nGenGlu__signal_16", "nGenGlu__signal_16",0,0,600,600);
   nGenGlu__signal_16->SetHighLightColor(2);
   nGenGlu__signal_16->Range(-2.683529,0.7224037,11.21633,1.90861);
   nGenGlu__signal_16->SetFillColor(0);
   nGenGlu__signal_16->SetFillStyle(4000);
   nGenGlu__signal_16->SetBorderMode(0);
   nGenGlu__signal_16->SetBorderSize(2);
   nGenGlu__signal_16->SetLogy();
   nGenGlu__signal_16->SetLeftMargin(0.15709);
   nGenGlu__signal_16->SetRightMargin(0.1234783);
   nGenGlu__signal_16->SetBottomMargin(0.12);
   nGenGlu__signal_16->SetFrameFillStyle(1000);
   nGenGlu__signal_16->SetFrameBorderMode(0);
   nGenGlu__signal_16->SetFrameFillStyle(1000);
   nGenGlu__signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_25 = new TH1F("st_stack_25","",10,-0.5,9.5);
   st_stack_25->SetMinimum(7.324001);
   st_stack_25->SetMaximum(61.65796);
   st_stack_25->SetDirectory(0);
   st_stack_25->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_25->SetLineColor(ci);
   st_stack_25->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_25->GetXaxis()->SetLabelFont(42);
   st_stack_25->GetXaxis()->SetTitleOffset(1);
   st_stack_25->GetXaxis()->SetTitleFont(42);
   st_stack_25->GetYaxis()->SetTitle("Events/1.0");
   st_stack_25->GetYaxis()->SetLabelFont(42);
   st_stack_25->GetYaxis()->SetTitleSize(0.037);
   st_stack_25->GetYaxis()->SetTitleFont(42);
   st_stack_25->GetZaxis()->SetLabelFont(42);
   st_stack_25->GetZaxis()->SetTitleOffset(1);
   st_stack_25->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_25);
   
   
   TH1D *nGenGlu_stack_1 = new TH1D("nGenGlu_stack_1","",10,-0.5,9.5);
   nGenGlu_stack_1->SetBinContent(1,47.50051);
   nGenGlu_stack_1->SetBinContent(2,47.81539);
   nGenGlu_stack_1->SetBinContent(3,28.79809);
   nGenGlu_stack_1->SetBinContent(4,13.72015);
   nGenGlu_stack_1->SetBinContent(5,5.838049);
   nGenGlu_stack_1->SetBinContent(6,2.29141);
   nGenGlu_stack_1->SetBinContent(7,0.8437731);
   nGenGlu_stack_1->SetBinContent(8,0.2836373);
   nGenGlu_stack_1->SetBinContent(9,0.08882162);
   nGenGlu_stack_1->SetBinContent(10,0.02407722);
   nGenGlu_stack_1->SetBinContent(11,0.02398218);
   nGenGlu_stack_1->SetBinError(1,0.3930147);
   nGenGlu_stack_1->SetBinError(2,0.3841499);
   nGenGlu_stack_1->SetBinError(3,0.2948593);
   nGenGlu_stack_1->SetBinError(4,0.2024125);
   nGenGlu_stack_1->SetBinError(5,0.1313991);
   nGenGlu_stack_1->SetBinError(6,0.08217975);
   nGenGlu_stack_1->SetBinError(7,0.04959925);
   nGenGlu_stack_1->SetBinError(8,0.02874375);
   nGenGlu_stack_1->SetBinError(9,0.01577967);
   nGenGlu_stack_1->SetBinError(10,0.008095619);
   nGenGlu_stack_1->SetBinError(11,0.008484193);
   nGenGlu_stack_1->SetEntries(54432);

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
   nGenGlu_stack_2->SetBinContent(1,3.355706);
   nGenGlu_stack_2->SetBinContent(2,5.980343);
   nGenGlu_stack_2->SetBinContent(3,5.213943);
   nGenGlu_stack_2->SetBinContent(4,3.221832);
   nGenGlu_stack_2->SetBinContent(5,1.603756);
   nGenGlu_stack_2->SetBinContent(6,0.6848066);
   nGenGlu_stack_2->SetBinContent(7,0.2396105);
   nGenGlu_stack_2->SetBinContent(8,0.09843725);
   nGenGlu_stack_2->SetBinContent(9,0.02517304);
   nGenGlu_stack_2->SetBinContent(10,0.007384468);
   nGenGlu_stack_2->SetBinContent(11,0.003863155);
   nGenGlu_stack_2->SetBinError(1,0.03581301);
   nGenGlu_stack_2->SetBinError(2,0.04785265);
   nGenGlu_stack_2->SetBinError(3,0.04462963);
   nGenGlu_stack_2->SetBinError(4,0.03504222);
   nGenGlu_stack_2->SetBinError(5,0.02473033);
   nGenGlu_stack_2->SetBinError(6,0.01615779);
   nGenGlu_stack_2->SetBinError(7,0.009515417);
   nGenGlu_stack_2->SetBinError(8,0.006079514);
   nGenGlu_stack_2->SetBinError(9,0.003066684);
   nGenGlu_stack_2->SetBinError(10,0.001664017);
   nGenGlu_stack_2->SetBinError(11,0.001224937);
   nGenGlu_stack_2->SetEntries(54504);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenGlu__signal_16->Modified();
   nGenGlu__signal_16->cd();
   nGenGlu__signal_16->SetSelected(nGenGlu__signal_16);
}
