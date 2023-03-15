#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_nGenGlu_signal_16_logY()
{
//=========Macro generated from canvas: GenJet_VbbHcc_nGenGlu_signal_16/GenJet_VbbHcc_nGenGlu_signal_16
//=========  (Thu Mar  9 15:52:25 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_nGenGlu_signal_16 = new TCanvas("GenJet_VbbHcc_nGenGlu_signal_16", "GenJet_VbbHcc_nGenGlu_signal_16",0,0,600,600);
   GenJet_VbbHcc_nGenGlu_signal_16->SetHighLightColor(2);
   GenJet_VbbHcc_nGenGlu_signal_16->Range(-4.867058,-0.6225528,22.93266,2.231343);
   GenJet_VbbHcc_nGenGlu_signal_16->SetFillColor(0);
   GenJet_VbbHcc_nGenGlu_signal_16->SetFillStyle(4000);
   GenJet_VbbHcc_nGenGlu_signal_16->SetBorderMode(0);
   GenJet_VbbHcc_nGenGlu_signal_16->SetBorderSize(2);
   GenJet_VbbHcc_nGenGlu_signal_16->SetLogy();
   GenJet_VbbHcc_nGenGlu_signal_16->SetLeftMargin(0.15709);
   GenJet_VbbHcc_nGenGlu_signal_16->SetRightMargin(0.1234783);
   GenJet_VbbHcc_nGenGlu_signal_16->SetBottomMargin(0.12);
   GenJet_VbbHcc_nGenGlu_signal_16->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenGlu_signal_16->SetFrameBorderMode(0);
   GenJet_VbbHcc_nGenGlu_signal_16->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenGlu_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(64.81414);
   
   TH1F *st_stack_169 = new TH1F("st_stack_169","",20,-0.5,19.5);
   st_stack_169->SetMinimum(0.5247044);
   st_stack_169->SetMaximum(88.2985);
   st_stack_169->SetDirectory(0);
   st_stack_169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_169->SetLineColor(ci);
   st_stack_169->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_169->GetXaxis()->SetLabelFont(42);
   st_stack_169->GetXaxis()->SetTitleOffset(1);
   st_stack_169->GetXaxis()->SetTitleFont(42);
   st_stack_169->GetYaxis()->SetTitle("Event/1.0");
   st_stack_169->GetYaxis()->SetLabelFont(42);
   st_stack_169->GetYaxis()->SetTitleSize(0.037);
   st_stack_169->GetYaxis()->SetTitleFont(42);
   st_stack_169->GetZaxis()->SetLabelFont(42);
   st_stack_169->GetZaxis()->SetTitleOffset(1);
   st_stack_169->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_169);
   
   
   TH1D *GenJet_VbbHcc_nGenGlu_stack_1 = new TH1D("GenJet_VbbHcc_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(1,47.50051);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(2,47.81539);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(3,28.79809);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(4,13.72015);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(5,5.838049);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(6,2.29141);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(7,0.8437731);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(8,0.2836373);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(9,0.08882162);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(10,0.02407722);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(11,0.01533623);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(12,0.005742916);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinContent(13,0.002903028);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(1,0.3930147);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(2,0.3841499);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(3,0.2948593);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(4,0.2024125);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(5,0.1313991);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(6,0.08217975);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(7,0.04959925);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(8,0.02874375);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(9,0.01577967);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(10,0.008095619);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(11,0.006860182);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(12,0.004061019);
   GenJet_VbbHcc_nGenGlu_stack_1->SetBinError(13,0.002903028);
   GenJet_VbbHcc_nGenGlu_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   GenJet_VbbHcc_nGenGlu_stack_1->SetFillColor(ci);
   GenJet_VbbHcc_nGenGlu_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenGlu_stack_1,"");
   
   TH1D *GenJet_VbbHcc_nGenGlu_stack_2 = new TH1D("GenJet_VbbHcc_nGenGlu_stack_2","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(1,3.355706);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(2,5.980343);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(3,5.213943);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(4,3.221832);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(5,1.603756);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(6,0.6848066);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(7,0.2396105);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(8,0.09843725);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(9,0.02517304);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(10,0.007384468);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(11,0.002674582);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(13,0.0007785158);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinContent(14,0.000410057);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(1,0.03581301);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(2,0.04785265);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(3,0.04462963);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(4,0.03504222);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(5,0.02473033);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(6,0.01615779);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(7,0.009515417);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(8,0.006079514);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(9,0.003066684);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(10,0.001664017);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(11,0.001013825);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(13,0.0005518);
   GenJet_VbbHcc_nGenGlu_stack_2->SetBinError(14,0.000410057);
   GenJet_VbbHcc_nGenGlu_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   GenJet_VbbHcc_nGenGlu_stack_2->SetFillColor(ci);
   GenJet_VbbHcc_nGenGlu_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_VbbHcc_nGenGlu_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_VbbHcc_nGenGlu_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   GenJet_VbbHcc_nGenGlu_signal_16->Modified();
   GenJet_VbbHcc_nGenGlu_signal_16->cd();
   GenJet_VbbHcc_nGenGlu_signal_16->SetSelected(GenJet_VbbHcc_nGenGlu_signal_16);
}
