#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Mon Mar 20 11:48:17 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(-1.310117,-3.466859,7.029799,0.3792946);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetFillStyle(4000);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetLogy();
   Z_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_17->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(0.9887912);
   
   TH1F *st_stack_146 = new TH1F("st_stack_146","",30,0,6);
   st_stack_146->SetMinimum(1.002454);
   st_stack_146->SetMaximum(0.9878231);
   st_stack_146->SetDirectory(0);
   st_stack_146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_146->SetLineColor(ci);
   st_stack_146->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_146->GetXaxis()->SetRange(1,30);
   st_stack_146->GetXaxis()->SetLabelFont(42);
   st_stack_146->GetXaxis()->SetTitleOffset(1);
   st_stack_146->GetXaxis()->SetTitleFont(42);
   st_stack_146->GetYaxis()->SetTitle("Event/0.2");
   st_stack_146->GetYaxis()->SetLabelFont(42);
   st_stack_146->GetYaxis()->SetTitleSize(0.037);
   st_stack_146->GetYaxis()->SetTitleFont(42);
   st_stack_146->GetZaxis()->SetLabelFont(42);
   st_stack_146->GetZaxis()->SetTitleOffset(1);
   st_stack_146->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_146);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,0.1564449);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,0.6099769);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,0.3634578);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,0.1659264);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,0.07743231);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,0.03476553);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,0.02054326);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,0.01264201);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,0.009481507);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,0.0157233);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,0.03104701);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,0.0239657);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,0.01619276);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,0.01106176);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,0.007412035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,0.005697677);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,0.004469625);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,0.003870809);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,0.03114085);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,0.2107197);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,0.160064);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,0.05729916);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,0.01868451);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,0.007473804);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,0.004359719);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,0.002906479);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,0.00145324);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,0.001868451);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,0.001038028);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,0.0008304226);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,0.00254264);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,0.006614122);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,0.005764563);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,0.003449004);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,0.00196952);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,0.001245634);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,0.0009513686);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,0.0007767892);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,0.0005492729);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,0.000622817);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,0.0004642204);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,0.0002935987);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,0.0002935987);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,0.0002935987);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
