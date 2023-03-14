#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Fri Mar 10 11:26:58 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2183529,-0.8618735,1.171633,6.320406);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetFillStyle(4000);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15709);
   Sphericity_both_16->SetRightMargin(0.1234783);
   Sphericity_both_16->SetBottomMargin(0.12);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.602178);
   
   TH1F *st_stack_185 = new TH1F("st_stack_185","",25,0,1);
   st_stack_185->SetMinimum(0);
   st_stack_185->SetMaximum(5.602178);
   st_stack_185->SetDirectory(0);
   st_stack_185->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_185->SetLineColor(ci);
   st_stack_185->GetXaxis()->SetTitle("Sphericity");
   st_stack_185->GetXaxis()->SetRange(1,25);
   st_stack_185->GetXaxis()->SetLabelFont(42);
   st_stack_185->GetXaxis()->SetTitleOffset(1);
   st_stack_185->GetXaxis()->SetTitleFont(42);
   st_stack_185->GetYaxis()->SetTitle("Event/0.04");
   st_stack_185->GetYaxis()->SetLabelFont(42);
   st_stack_185->GetYaxis()->SetTitleSize(0.037);
   st_stack_185->GetYaxis()->SetTitleFont(42);
   st_stack_185->GetZaxis()->SetLabelFont(42);
   st_stack_185->GetZaxis()->SetTitleOffset(1);
   st_stack_185->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_185);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,0.3679227);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,1.744273);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,3.073526);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,3.450161);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,3.283665);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,2.843241);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,2.816613);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,2.514915);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,2.204729);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,1.949546);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,1.852687);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,1.768952);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,1.470409);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,1.33713);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,1.151089);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,0.874395);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,0.6924128);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,0.5762382);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,0.3684605);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,0.1780397);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,0.06447026);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,0.02429502);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,0.03160944);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,0.07052798);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,0.09516707);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,0.1009358);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,0.09944216);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,0.09267505);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,0.0919342);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,0.08705578);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,0.08155139);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,0.07619535);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,0.07469011);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,0.07342239);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,0.06701237);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,0.06357049);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,0.05880711);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,0.05156058);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,0.04601766);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,0.04160276);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,0.03317139);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,0.02339185);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,0.01365133);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,0.008250787);
   VbbHcc_both_Sphericity_stack_1->SetEntries(12314);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,0.2127639);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,0.7453122);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,1.054652);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,1.199647);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,1.211681);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,1.148388);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,1.098323);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,1.036469);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,0.9565329);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,0.8646073);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,0.8019455);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,0.7094624);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,0.6110323);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,0.5202766);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,0.4493423);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,0.3631672);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,0.2864225);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,0.2200469);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,0.1016304);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.05394804);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.01871018);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,0.005192494);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.0004284568);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,0.00876324);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,0.01657892);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,0.01989678);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,0.0213244);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,0.02148409);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,0.02093529);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,0.02048325);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,0.01995626);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,0.01917487);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,0.01824209);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,0.01758199);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,0.0165102);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,0.01530389);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,0.01413986);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,0.01311029);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,0.01182681);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.0105036);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.009182379);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.00625585);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.004561076);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.0026775);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.001399665);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.0004284568);
   VbbHcc_both_Sphericity_stack_2->SetEntries(36571);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","ZHcc","F");

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
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
