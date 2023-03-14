#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Fri Mar 10 11:26:56 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.310117,-0.3068375,7.029799,2.250142);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetLeftMargin(0.15709);
   Z_dR_algo_16->SetRightMargin(0.1234783);
   Z_dR_algo_16->SetBottomMargin(0.12);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.994444);
   
   TH1F *st_stack_81 = new TH1F("st_stack_81","",30,0,6);
   st_stack_81->SetMinimum(0);
   st_stack_81->SetMaximum(1.994444);
   st_stack_81->SetDirectory(0);
   st_stack_81->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_81->SetLineColor(ci);
   st_stack_81->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_81->GetXaxis()->SetRange(1,30);
   st_stack_81->GetXaxis()->SetLabelFont(42);
   st_stack_81->GetXaxis()->SetTitleOffset(1);
   st_stack_81->GetXaxis()->SetTitleFont(42);
   st_stack_81->GetYaxis()->SetTitle("Event/0.2");
   st_stack_81->GetYaxis()->SetLabelFont(42);
   st_stack_81->GetYaxis()->SetTitleSize(0.037);
   st_stack_81->GetYaxis()->SetTitleFont(42);
   st_stack_81->GetZaxis()->SetLabelFont(42);
   st_stack_81->GetZaxis()->SetTitleOffset(1);
   st_stack_81->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_81);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.7212695);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,1.151357);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,1.202774);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,1.157549);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,1.053727);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.753022);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.6378434);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.5084359);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.3553686);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.3656629);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.2942068);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.3013367);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.2446124);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.2000583);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.09201128);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.03763457);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,0.03452808);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.02027087);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,0.008935443);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,0.01117436);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,0.001957143);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.04750018);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.05974999);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.06123331);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.05960986);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.05621502);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.0479032);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.04341555);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.03892952);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.03247678);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.03284267);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.02970843);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.03006018);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.02660031);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.02449056);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.01632858);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.01048611);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,0.009672855);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.007710423);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,0.00516996);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,0.005603142);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,0.001957143);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(3307);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);
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
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.0003747978);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.1811367);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.3974852);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.452614);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.4751093);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.3793154);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.2507619);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.2238825);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.1907467);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.1474985);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.143274);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.1449585);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.1197057);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.1263667);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.1021053);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.04877962);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.0259319);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.008705934);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.006450708);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,0.005838382);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,0.00281233);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,0.0003870755);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,0.001181477);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.0003747978);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.008329335);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.01234288);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.01316546);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.01351096);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.01207326);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.009777815);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.009253545);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.008525974);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.007458073);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.007392306);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.007401935);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.006696755);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.00690715);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.006219986);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.004293494);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.003136643);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.001766947);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.001567217);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,0.001466949);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,0.001005647);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,0.0003870755);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,0.0006842069);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(9173);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
