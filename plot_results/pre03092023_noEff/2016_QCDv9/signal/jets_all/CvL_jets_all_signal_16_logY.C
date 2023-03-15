#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_signal_16_logY()
{
//=========Macro generated from canvas: CvL_jets_all_signal_16/CvL_jets_all_signal_16
//=========  (Wed Mar  1 14:06:43 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_signal_16 = new TCanvas("CvL_jets_all_signal_16", "CvL_jets_all_signal_16",0,0,600,600);
   CvL_jets_all_signal_16->SetHighLightColor(2);
   CvL_jets_all_signal_16->Range(-0.2183529,-0.2947758,1.171633,6.302461);
   CvL_jets_all_signal_16->SetFillColor(0);
   CvL_jets_all_signal_16->SetFillStyle(4000);
   CvL_jets_all_signal_16->SetBorderMode(0);
   CvL_jets_all_signal_16->SetBorderSize(2);
   CvL_jets_all_signal_16->SetLogy();
   CvL_jets_all_signal_16->SetLeftMargin(0.15709);
   CvL_jets_all_signal_16->SetRightMargin(0.1234783);
   CvL_jets_all_signal_16->SetBottomMargin(0.12);
   CvL_jets_all_signal_16->SetFrameFillStyle(1000);
   CvL_jets_all_signal_16->SetFrameBorderMode(0);
   CvL_jets_all_signal_16->SetFrameFillStyle(1000);
   CvL_jets_all_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(234406.4);
   
   TH1F *st_stack_169 = new TH1F("st_stack_169","",20,0,1);
   st_stack_169->SetMinimum(3.139733);
   st_stack_169->SetMaximum(439276.1);
   st_stack_169->SetDirectory(0);
   st_stack_169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_169->SetLineColor(ci);
   st_stack_169->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_169->GetXaxis()->SetRange(1,20);
   st_stack_169->GetXaxis()->SetLabelFont(42);
   st_stack_169->GetXaxis()->SetTitleOffset(1);
   st_stack_169->GetXaxis()->SetTitleFont(42);
   st_stack_169->GetYaxis()->SetTitle("Events/0.05");
   st_stack_169->GetYaxis()->SetLabelFont(42);
   st_stack_169->GetYaxis()->SetTitleSize(0.037);
   st_stack_169->GetYaxis()->SetTitleFont(42);
   st_stack_169->GetZaxis()->SetLabelFont(42);
   st_stack_169->GetZaxis()->SetTitleOffset(1);
   st_stack_169->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_169);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,420.2894);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,2039.721);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,598.6786);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,206.9314);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,115.4421);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,77.516);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,59.11559);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,46.44402);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,40.4489);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,36.69326);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,33.90992);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,30.81616);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,29.88991);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,29.25303);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,30.8091);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,33.38236);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,35.17352);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,41.02107);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,50.7571);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,134.0602);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,1.133621);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,2.504619);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.351842);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,0.7952596);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,0.5953782);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,0.4889592);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,0.4269011);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,0.3776791);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,0.3526523);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,0.3360479);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,0.322494);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,0.3084131);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,0.3041033);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,0.3004568);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,0.3082219);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,0.3206194);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,0.3299089);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,0.3557214);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,0.395417);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,0.6437609);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(1514033);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvL_stack_2 = new TH1D("VbbHcc_jets_all_CvL_stack_2","",20,0,1);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,81.39609);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,304.3429);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,89.92318);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,32.36529);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,18.05141);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,12.38311);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,9.311137);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,7.367818);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,6.663548);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,5.981488);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,5.518978);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,5.255792);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,5.052523);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,5.104687);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,5.347689);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,5.817454);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,6.418491);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,7.683954);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,9.500221);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,25.29413);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,0.1767391);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,0.3396991);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,0.1844713);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,0.1108593);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,0.08283457);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,0.0686374);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,0.05955934);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,0.05298557);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,0.05043661);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,0.04781786);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,0.04592538);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,0.04480324);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,0.04394167);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,0.04419691);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,0.04527549);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,0.04722333);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,0.04961122);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,0.05430856);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,0.06037667);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,0.0986279);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(1742042);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_1","ZHcc","F");

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
   CvL_jets_all_signal_16->Modified();
   CvL_jets_all_signal_16->cd();
   CvL_jets_all_signal_16->SetSelected(CvL_jets_all_signal_16);
}
