#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Mon Mar 20 11:50:03 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.310117,-0.1140955,7.029799,0.8367001);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetFillStyle(4000);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_17->SetBottomMargin(0.12);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.7416206);
   
   TH1F *st_stack_138 = new TH1F("st_stack_138","",30,0,6);
   st_stack_138->SetMinimum(0);
   st_stack_138->SetMaximum(0.7416206);
   st_stack_138->SetDirectory(0);
   st_stack_138->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_138->SetLineColor(ci);
   st_stack_138->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_138->GetXaxis()->SetRange(1,30);
   st_stack_138->GetXaxis()->SetLabelFont(42);
   st_stack_138->GetXaxis()->SetTitleOffset(1);
   st_stack_138->GetXaxis()->SetTitleFont(42);
   st_stack_138->GetYaxis()->SetTitle("Event/0.2");
   st_stack_138->GetYaxis()->SetLabelFont(42);
   st_stack_138->GetYaxis()->SetTitleSize(0.037);
   st_stack_138->GetYaxis()->SetTitleFont(42);
   st_stack_138->GetZaxis()->SetLabelFont(42);
   st_stack_138->GetZaxis()->SetTitleOffset(1);
   st_stack_138->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_138);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,0.1311608);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,0.4519518);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,0.3697788);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,0.1690869);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,0.1200991);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,0.05846929);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,0.04582728);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,0.01896301);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,0.01422226);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,0.004740753);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,0.02054326);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,0.004740753);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,0.006321005);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,0.009481507);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,0.01106176);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,0.009481507);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,0.01439677);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,0.02672447);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,0.02417319);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,0.01634624);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,0.01377631);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,0.009612292);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,0.008509913);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,0.005474151);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,0.004740753);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,0.002737075);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,0.005697677);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,0.002737075);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,0.003870809);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,0.004180952);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,0.003870809);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,0.002234813);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,0.002234813);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,0.03238648);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,0.1635933);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,0.1239406);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,0.06892508);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,0.03840705);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,0.0182693);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,0.0110031);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,0.00954986);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,0.005605353);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,0.003736902);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,0.002906479);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,0.003736902);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,0.004152113);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,0.001868451);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,0.002906479);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,0.001245634);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,0.002491268);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,0.002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,0.00145324);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,0.000622817);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,0.0004152113);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,0.002592994);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,0.005827768);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,0.00507255);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,0.003782755);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,0.002823742);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,0.001947514);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,0.001511392);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,0.00140805);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,0.001078751);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,0.0008807962);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,0.0007767892);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,0.0008807962);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,0.0009284407);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,0.000622817);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,0.0007767892);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,0.0005085279);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,0.0007191671);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,0.0006565067);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,0.0005492729);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,0.0003595835);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.0002935987);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
