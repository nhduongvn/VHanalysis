#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_all()
{
//=========Macro generated from canvas: Z_dR_both_all/Z_dR_both_all
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_both_all = new TCanvas("Z_dR_both_all", "Z_dR_both_all",0,0,600,600);
   Z_dR_both_all->SetHighLightColor(2);
   Z_dR_both_all->Range(-1.310117,-1.037809,7.029799,7.610601);
   Z_dR_both_all->SetFillColor(0);
   Z_dR_both_all->SetFillStyle(4000);
   Z_dR_both_all->SetBorderMode(0);
   Z_dR_both_all->SetBorderSize(2);
   Z_dR_both_all->SetLeftMargin(0.15709);
   Z_dR_both_all->SetRightMargin(0.1234783);
   Z_dR_both_all->SetBottomMargin(0.12);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6.74576);
   
   TH1F *st_stack_132 = new TH1F("st_stack_132","",30,0,6);
   st_stack_132->SetMinimum(0);
   st_stack_132->SetMaximum(6.74576);
   st_stack_132->SetDirectory(0);
   st_stack_132->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_132->SetLineColor(ci);
   st_stack_132->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_132->GetXaxis()->SetRange(1,30);
   st_stack_132->GetXaxis()->SetLabelFont(42);
   st_stack_132->GetXaxis()->SetTitleOffset(1);
   st_stack_132->GetXaxis()->SetTitleFont(42);
   st_stack_132->GetYaxis()->SetTitle("Events/0.2");
   st_stack_132->GetYaxis()->SetLabelFont(42);
   st_stack_132->GetYaxis()->SetTitleSize(0.037);
   st_stack_132->GetYaxis()->SetTitleFont(42);
   st_stack_132->GetZaxis()->SetLabelFont(42);
   st_stack_132->GetZaxis()->SetTitleOffset(1);
   st_stack_132->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_132);
   
   
   TH1D *VbbHcc_both_Z_dR_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(3,1.155173);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(4,1.944479);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(5,2.724559);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(6,3.047931);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(7,2.973911);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(8,2.831247);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(9,2.605694);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(10,2.250169);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(11,2.059032);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(12,2.037849);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(13,2.018465);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(14,2.100014);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(15,2.252907);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(16,2.122812);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(17,0.7910787);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(18,0.36533);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(19,0.1699719);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(20,0.1238925);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(21,0.05736453);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(22,0.05056409);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(23,0.01925267);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(24,0.02336129);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(25,0.01022278);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(26,0.001493284);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(3,0.04968879);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(4,0.06413361);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(5,0.07698727);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(6,0.08154186);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(7,0.08095032);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(8,0.07785647);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(9,0.07506561);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(10,0.06963977);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(11,0.06578328);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(12,0.06521779);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(13,0.06532656);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(14,0.06554245);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(15,0.06877411);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(16,0.06728515);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(17,0.04131554);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(18,0.02738829);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(19,0.01833964);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(20,0.01603907);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(21,0.01048978);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(22,0.009931024);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(23,0.006161647);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(24,0.007166082);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(25,0.004217166);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(26,0.001493284);
   VbbHcc_both_Z_dR_all_stack_1->SetEntries(19696);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(2,0.0001817164);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(3,0.4728451);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(4,0.9502918);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(5,1.34112);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(6,1.449242);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(7,1.159566);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(8,0.8170568);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(9,0.6114057);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(10,0.5130112);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(11,0.466017);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(12,0.4612825);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(13,0.4718164);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(14,0.504984);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(15,0.538792);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(16,0.5463692);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(17,0.2540616);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(18,0.1402654);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(19,0.08272401);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(20,0.04826425);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(21,0.03065629);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(22,0.01719178);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(23,0.01120215);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(24,0.005505937);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(25,0.003357053);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(26,0.0008655337);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(27,0.0003904085);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(29,0.00018361);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(2,0.0001817164);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(3,0.01178721);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(4,0.01666532);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(5,0.019845);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(6,0.02078158);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(7,0.01853679);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(8,0.01543787);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(9,0.01334535);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(10,0.01215586);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(11,0.01164005);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(12,0.01145259);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(13,0.01159995);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(14,0.01205279);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(15,0.01242882);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(16,0.01257457);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(17,0.008593973);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(18,0.00631373);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(19,0.004784841);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(20,0.003608946);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(21,0.002908249);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(22,0.002194272);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(23,0.001683494);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(24,0.001260153);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(25,0.001060984);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(26,0.0005034284);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(27,0.0002903729);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(29,0.00018361);
   VbbHcc_both_Z_dR_all_stack_2->SetEntries(45704);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_all->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->SetSelected(Z_dR_both_all);
}
