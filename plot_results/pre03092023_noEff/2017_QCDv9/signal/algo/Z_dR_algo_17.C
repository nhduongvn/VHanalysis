#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_17()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Thu Feb 16 10:35:19 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(-1.310117,-0.1043778,7.029799,0.765437);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetLeftMargin(0.15709);
   Z_dR_algo_17->SetRightMargin(0.1234783);
   Z_dR_algo_17->SetBottomMargin(0.12);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.6784555);
   
   TH1F *st_stack_82 = new TH1F("st_stack_82","",30,0,6);
   st_stack_82->SetMinimum(0);
   st_stack_82->SetMaximum(0.6784555);
   st_stack_82->SetDirectory(0);
   st_stack_82->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_82->SetLineColor(ci);
   st_stack_82->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_82->GetXaxis()->SetRange(1,30);
   st_stack_82->GetXaxis()->SetLabelFont(42);
   st_stack_82->GetXaxis()->SetTitleOffset(1);
   st_stack_82->GetXaxis()->SetTitleFont(42);
   st_stack_82->GetYaxis()->SetTitle("Events/0.2");
   st_stack_82->GetYaxis()->SetLabelFont(42);
   st_stack_82->GetYaxis()->SetTitleSize(0.037);
   st_stack_82->GetYaxis()->SetTitleFont(42);
   st_stack_82->GetZaxis()->SetLabelFont(42);
   st_stack_82->GetZaxis()->SetTitleOffset(1);
   st_stack_82->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_82);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.1921898);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.2910057);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.3197536);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.2651168);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.136908);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.1162934);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.06150893);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.04431363);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.03065266);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.02449153);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.02419672);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.01236022);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.01061191);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.007318927);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.003274395);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.002891532);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,0.001927338);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.01924384);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.02354514);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.02466578);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.02252455);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.01666632);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.01509693);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.01042448);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.009340488);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.007201004);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.006606625);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.006593911);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.004674421);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.004453097);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.003439064);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.002331898);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.002188465);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,0.001927338);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.04305726);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.09262129);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.13255);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.1092734);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.07474275);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.03156049);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.01941616);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.01104863);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.009194182);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.006853272);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.00411192);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.00904734);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.005064624);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.005251478);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.001012059);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.00143746);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.0003004325);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.0008863965);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.003190153);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.004698694);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.005665892);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.005154342);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.004259432);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.002761386);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.00218043);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.001643814);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.001490821);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.001293845);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.0009782219);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.001481362);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.001080783);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.001127871);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.0004819778);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.0005954069);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.0003004325);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.0004603403);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}
