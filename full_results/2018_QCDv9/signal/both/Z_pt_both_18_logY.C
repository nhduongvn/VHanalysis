#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_18_logY()
{
//=========Macro generated from canvas: Z_pt_both_18/Z_pt_both_18
//=========  (Thu Feb 16 10:37:19 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_both_18 = new TCanvas("Z_pt_both_18", "Z_pt_both_18",0,0,600,600);
   Z_pt_both_18->SetHighLightColor(2);
   Z_pt_both_18->Range(37.97653,0.524326,1705.96,2.643773);
   Z_pt_both_18->SetFillColor(0);
   Z_pt_both_18->SetFillStyle(4000);
   Z_pt_both_18->SetBorderMode(0);
   Z_pt_both_18->SetBorderSize(2);
   Z_pt_both_18->SetLogy();
   Z_pt_both_18->SetLeftMargin(0.15709);
   Z_pt_both_18->SetRightMargin(0.1234783);
   Z_pt_both_18->SetBottomMargin(0.12);
   Z_pt_both_18->SetFrameFillStyle(1000);
   Z_pt_both_18->SetFrameBorderMode(0);
   Z_pt_both_18->SetFrameFillStyle(1000);
   Z_pt_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(213.5175);
   
   TH1F *st_stack_139 = new TH1F("st_stack_139","",40,0,2000);
   st_stack_139->SetMinimum(6.007028);
   st_stack_139->SetMaximum(270.2889);
   st_stack_139->SetDirectory(0);
   st_stack_139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_139->SetLineColor(ci);
   st_stack_139->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_139->GetXaxis()->SetRange(7,30);
   st_stack_139->GetXaxis()->SetLabelFont(42);
   st_stack_139->GetXaxis()->SetTitleOffset(1);
   st_stack_139->GetXaxis()->SetTitleFont(42);
   st_stack_139->GetYaxis()->SetTitle("Events/50.0");
   st_stack_139->GetYaxis()->SetLabelFont(42);
   st_stack_139->GetYaxis()->SetTitleSize(0.037);
   st_stack_139->GetYaxis()->SetTitleFont(42);
   st_stack_139->GetZaxis()->SetLabelFont(42);
   st_stack_139->GetZaxis()->SetTitleOffset(1);
   st_stack_139->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_139);
   
   
   TH1D *VbbHcc_both_Z_pt_stack_1 = new TH1D("VbbHcc_both_Z_pt_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(1,0.6663445);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(2,1.606417);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(3,2.135175);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(4,1.469241);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(5,0.8783293);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(6,0.592653);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(7,0.3287731);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(8,0.2374848);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(9,0.09379434);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(10,0.05288258);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(11,0.009531255);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(12,0.01061136);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(13,0.003699979);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(14,0.01022762);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(15,0.002358174);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(16,0.003340468);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(17,0.01218356);
   VbbHcc_both_Z_pt_stack_1->SetBinError(1,0.04417834);
   VbbHcc_both_Z_pt_stack_1->SetBinError(2,0.06738138);
   VbbHcc_both_Z_pt_stack_1->SetBinError(3,0.07654564);
   VbbHcc_both_Z_pt_stack_1->SetBinError(4,0.07918048);
   VbbHcc_both_Z_pt_stack_1->SetBinError(5,0.05634239);
   VbbHcc_both_Z_pt_stack_1->SetBinError(6,0.04145787);
   VbbHcc_both_Z_pt_stack_1->SetBinError(7,0.02989505);
   VbbHcc_both_Z_pt_stack_1->SetBinError(8,0.03218888);
   VbbHcc_both_Z_pt_stack_1->SetBinError(9,0.01608148);
   VbbHcc_both_Z_pt_stack_1->SetBinError(10,0.01195551);
   VbbHcc_both_Z_pt_stack_1->SetBinError(11,0.004786011);
   VbbHcc_both_Z_pt_stack_1->SetBinError(12,0.005367313);
   VbbHcc_both_Z_pt_stack_1->SetBinError(13,0.002748225);
   VbbHcc_both_Z_pt_stack_1->SetBinError(14,0.005254239);
   VbbHcc_both_Z_pt_stack_1->SetBinError(15,0.002358174);
   VbbHcc_both_Z_pt_stack_1->SetBinError(16,0.003340468);
   VbbHcc_both_Z_pt_stack_1->SetBinError(17,0.007578939);
   VbbHcc_both_Z_pt_stack_1->SetEntries(3234);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_stack_2 = new TH1D("VbbHcc_both_Z_pt_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(1,0.2327927);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(2,0.5036292);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(3,0.9183528);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(4,0.793623);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(5,0.4975234);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(6,0.2833433);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(7,0.1413847);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(8,0.08271963);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(9,0.03419489);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(10,0.01810581);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(11,0.0055234);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(12,0.002949093);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(13,0.0004371028);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(14,0.0006678741);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(16,0.0007635985);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(19,0.0003240891);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(20,0.0003105083);
   VbbHcc_both_Z_pt_stack_2->SetBinError(1,0.01064463);
   VbbHcc_both_Z_pt_stack_2->SetBinError(2,0.01344416);
   VbbHcc_both_Z_pt_stack_2->SetBinError(3,0.01877757);
   VbbHcc_both_Z_pt_stack_2->SetBinError(4,0.0181109);
   VbbHcc_both_Z_pt_stack_2->SetBinError(5,0.01329793);
   VbbHcc_both_Z_pt_stack_2->SetBinError(6,0.01053004);
   VbbHcc_both_Z_pt_stack_2->SetBinError(7,0.00704717);
   VbbHcc_both_Z_pt_stack_2->SetBinError(8,0.005595218);
   VbbHcc_both_Z_pt_stack_2->SetBinError(9,0.00344206);
   VbbHcc_both_Z_pt_stack_2->SetBinError(10,0.002509813);
   VbbHcc_both_Z_pt_stack_2->SetBinError(11,0.001362558);
   VbbHcc_both_Z_pt_stack_2->SetBinError(12,0.0009833016);
   VbbHcc_both_Z_pt_stack_2->SetBinError(13,0.0004371028);
   VbbHcc_both_Z_pt_stack_2->SetBinError(14,0.0004756561);
   VbbHcc_both_Z_pt_stack_2->SetBinError(16,0.0005400564);
   VbbHcc_both_Z_pt_stack_2->SetBinError(19,0.0003240891);
   VbbHcc_both_Z_pt_stack_2->SetBinError(20,0.0003105083);
   VbbHcc_both_Z_pt_stack_2->SetEntries(10352);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_both_18->Modified();
   Z_pt_both_18->cd();
   Z_pt_both_18->SetSelected(Z_pt_both_18);
}
