#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_17/H_dR_Bj1_algo_17
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_17 = new TCanvas("H_dR_Bj1_algo_17", "H_dR_Bj1_algo_17",0,0,600,600);
   H_dR_Bj1_algo_17->SetHighLightColor(2);
   H_dR_Bj1_algo_17->Range(-1.310117,-0.02580551,7.029799,0.1892404);
   H_dR_Bj1_algo_17->SetFillColor(0);
   H_dR_Bj1_algo_17->SetFillStyle(4000);
   H_dR_Bj1_algo_17->SetBorderMode(0);
   H_dR_Bj1_algo_17->SetBorderSize(2);
   H_dR_Bj1_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_17->SetBottomMargin(0.12);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.1677358);
   
   TH1F *st_stack_142 = new TH1F("st_stack_142","",30,0,6);
   st_stack_142->SetMinimum(0);
   st_stack_142->SetMaximum(0.1677358);
   st_stack_142->SetDirectory(0);
   st_stack_142->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_142->SetLineColor(ci);
   st_stack_142->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_142->GetXaxis()->SetRange(1,30);
   st_stack_142->GetXaxis()->SetLabelFont(42);
   st_stack_142->GetXaxis()->SetTitleOffset(1);
   st_stack_142->GetXaxis()->SetTitleFont(42);
   st_stack_142->GetYaxis()->SetTitle("Event/0.2");
   st_stack_142->GetYaxis()->SetLabelFont(42);
   st_stack_142->GetYaxis()->SetTitleSize(0.037);
   st_stack_142->GetYaxis()->SetTitleFont(42);
   st_stack_142->GetZaxis()->SetLabelFont(42);
   st_stack_142->GetZaxis()->SetTitleOffset(1);
   st_stack_142->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_142);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,0.01580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,0.08691381);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,0.1074571);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,0.07901256);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,0.0647903);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,0.03634578);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,0.02686427);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,0.01896301);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,0.01106176);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,0.01264201);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,0.01738276);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,0.01738276);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,0.006321005);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,0.009481507);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,0.004997193);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,0.01171946);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,0.01303108);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,0.01117406);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,0.01011854);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,0.007578618);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,0.006515542);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,0.005474151);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,0.004180952);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,0.004469625);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,0.0052411);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,0.0052411);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,0.003870809);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,0.002737075);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,0.002234813);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(331);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.0008304226);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,0.005605353);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,0.03072564);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,0.03176367);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,0.02968761);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,0.01972254);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,0.01557042);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,0.01017268);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,0.006643381);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,0.005812958);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,0.003114085);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,0.004359719);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,0.00477493);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,0.003529296);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,0.002076057);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,0.001038028);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,0.001245634);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,0.001868451);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,0.001038028);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,0.0004152113);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,0.0004152113);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.0004152113);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,0.001078751);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,0.002525632);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,0.00256794);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,0.002482603);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,0.00202349);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,0.001797918);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,0.00145324);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,0.001174395);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,0.001098546);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,0.0008040532);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,0.0009513686);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,0.0009956417);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,0.00085598);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,0.0006565067);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,0.0004642204);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,0.0005085279);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,0.000622817);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,0.0004642204);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,0.0002935987);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,0.0002935987);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(869);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","ZHcc","F");

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
   H_dR_Bj1_algo_17->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->SetSelected(H_dR_Bj1_algo_17);
}
