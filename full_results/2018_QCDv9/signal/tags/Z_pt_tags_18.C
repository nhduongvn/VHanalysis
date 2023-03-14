#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_18()
{
//=========Macro generated from canvas: Z_pt_tags_18/Z_pt_tags_18
//=========  (Thu Mar  9 13:09:04 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_18 = new TCanvas("Z_pt_tags_18", "Z_pt_tags_18",0,0,600,600);
   Z_pt_tags_18->SetHighLightColor(2);
   Z_pt_tags_18->Range(37.97653,-0.3880769,1705.96,2.845897);
   Z_pt_tags_18->SetFillColor(0);
   Z_pt_tags_18->SetFillStyle(4000);
   Z_pt_tags_18->SetBorderMode(0);
   Z_pt_tags_18->SetBorderSize(2);
   Z_pt_tags_18->SetLeftMargin(0.15709);
   Z_pt_tags_18->SetRightMargin(0.1234783);
   Z_pt_tags_18->SetBottomMargin(0.12);
   Z_pt_tags_18->SetFrameFillStyle(1000);
   Z_pt_tags_18->SetFrameBorderMode(0);
   Z_pt_tags_18->SetFrameFillStyle(1000);
   Z_pt_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.5225);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",40,0,2000);
   st_stack_11->SetMinimum(0);
   st_stack_11->SetMaximum(2.5225);
   st_stack_11->SetDirectory(0);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_11->GetXaxis()->SetRange(7,30);
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetTitleOffset(1);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetTitleSize(0.037);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetTitleOffset(1);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,0.6529659);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,1.570823);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,2.093675);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,1.44394);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,0.863416);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,0.5743837);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,0.3287731);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,0.2350071);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,0.09379434);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,0.05288258);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,0.009531255);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,0.01061136);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,0.001255088);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(14,0.01022762);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(16,0.003340468);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(17,0.009651359);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,0.0426937);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,0.06664413);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,0.07589802);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,0.07928292);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,0.05600478);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,0.04087084);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,0.02989505);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,0.03209338);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,0.01608148);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,0.01195551);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,0.004786011);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,0.005367313);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,0.001255088);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(14,0.005254239);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(16,0.003340468);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(17,0.007143407);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(3172);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,0.232403);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,0.4979798);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,0.9022458);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,0.7721636);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,0.4850548);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,0.2752928);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,0.134563);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,0.08125999);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,0.03348075);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,0.01810918);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,0.005086297);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,0.002622846);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,0.0004371028);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,0.0006678741);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,0.0007635985);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(19,0.0003240891);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,0.01063956);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,0.01336359);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,0.01861662);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,0.01791063);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,0.01314367);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,0.01039745);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,0.006867419);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,0.00554569);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,0.003404733);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,0.002510248);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,0.001290545);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,0.0009276015);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,0.0004371028);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,0.0004756561);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,0.0005400564);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(19,0.0003240891);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(10130);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tags_18->Modified();
   Z_pt_tags_18->cd();
   Z_pt_tags_18->SetSelected(Z_pt_tags_18);
}
