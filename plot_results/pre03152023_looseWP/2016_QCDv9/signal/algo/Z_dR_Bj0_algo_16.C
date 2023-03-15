#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Fri Mar 10 11:26:57 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_16 = new TCanvas("Z_dR_Bj0_algo_16", "Z_dR_Bj0_algo_16",0,0,600,600);
   Z_dR_Bj0_algo_16->SetHighLightColor(2);
   Z_dR_Bj0_algo_16->Range(-1.310117,-0.6836156,7.029799,5.013181);
   Z_dR_Bj0_algo_16->SetFillColor(0);
   Z_dR_Bj0_algo_16->SetFillStyle(4000);
   Z_dR_Bj0_algo_16->SetBorderMode(0);
   Z_dR_Bj0_algo_16->SetBorderSize(2);
   Z_dR_Bj0_algo_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_16->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.443501);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",30,0,6);
   st_stack_113->SetMinimum(0);
   st_stack_113->SetMaximum(4.443501);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_113->GetXaxis()->SetRange(1,30);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetTitleOffset(1);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Event/0.2");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetTitleSize(0.037);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetTitleOffset(1);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,0.6345217);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,2.713127);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,2.302876);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,1.362034);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,0.741187);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,0.4840963);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,0.2762358);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,0.1805105);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,0.1039303);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,0.06564018);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,0.05196514);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,0.02188006);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,0.0355551);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,0.02461507);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,0.01914505);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,0.01094003);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,0.005470015);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,0.005470015);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,0.04165839);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,0.08614188);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,0.07936236);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,0.06103419);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,0.04502391);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,0.03638691);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,0.02748648);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,0.02221931);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,0.01685972);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,0.01339875);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,0.01192162);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,0.007735769);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,0.00986121);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,0.008205022);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,0.00723615);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,0.005470015);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,0.003867885);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,0.003867885);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(3307);

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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,0.1643423);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,0.9749785);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,0.8770877);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,0.5023158);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,0.2725938);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,0.1754175);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,0.1014635);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,0.06287879);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,0.04715909);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,0.03215393);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,0.01822056);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,0.01536243);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,0.009288912);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,0.005716254);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,0.005001722);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,0.005001722);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,0.002858127);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,0.001429063);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,0.002500861);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,0.007662499);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,0.01866351);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,0.01770179);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,0.01339628);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,0.00986856);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,0.007916482);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,0.006020751);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,0.004739667);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,0.004104672);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,0.003389321);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,0.002551388);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,0.002342749);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,0.001821706);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,0.001429063);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,0.001336766);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,0.001336766);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,0.0010105);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,0.0007145317);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,0.0009452366);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(9173);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_16->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->SetSelected(Z_dR_Bj0_algo_16);
}
