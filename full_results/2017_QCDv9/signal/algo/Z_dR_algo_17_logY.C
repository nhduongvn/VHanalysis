#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(-1.310117,-0.08168949,7.029799,0.5990563);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetLogy();
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
   st->SetMinimum(1e+10);
   st->SetMaximum(50.56969);
   
   TH1F *st_stack_74 = new TH1F("st_stack_74","",30,0,6);
   st_stack_74->SetMinimum(-3.176565e+09);
   st_stack_74->SetMaximum(-33.33665);
   st_stack_74->SetDirectory(0);
   st_stack_74->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_74->SetLineColor(ci);
   st_stack_74->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_74->GetXaxis()->SetRange(1,30);
   st_stack_74->GetXaxis()->SetLabelFont(42);
   st_stack_74->GetXaxis()->SetTitleOffset(1);
   st_stack_74->GetXaxis()->SetTitleFont(42);
   st_stack_74->GetYaxis()->SetTitle("Events/0.2");
   st_stack_74->GetYaxis()->SetLabelFont(42);
   st_stack_74->GetYaxis()->SetTitleSize(0.037);
   st_stack_74->GetYaxis()->SetTitleFont(42);
   st_stack_74->GetZaxis()->SetLabelFont(42);
   st_stack_74->GetZaxis()->SetTitleOffset(1);
   st_stack_74->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_74);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.1048623);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.1575166);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.2996533);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.3690578);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.3256181);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.2825641);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.2429487);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.1894577);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.1352875);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.08282078);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.05022275);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.05232466);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.03633794);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.03326888);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.01438648);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.005834278);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.001376775);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,0.001472708);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.01372678);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.01659646);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.02368251);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.02623344);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.02478736);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.02300412);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.02104691);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.01915659);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.01572979);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.01242726);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.009731534);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.009630924);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.008012985);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.007500957);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.004816932);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.003452255);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.001376775);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,0.001472708);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(1606);

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
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.01548099);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.04299879);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.1106819);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.1366391);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.1112365);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.06302641);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.03513481);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.03010924);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.01571846);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.0138133);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.01034918);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.008830424);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.008990915);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.007080569);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.002065771);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.002353786);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.001142426);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.0006869676);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,0.0006937681);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,0.0002773986);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,1.511436e-06);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.001932008);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.003268156);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.005211148);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.005767997);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.005236437);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.003899965);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.002902469);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.002739152);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.00194201);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.001872045);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.001597908);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.001464619);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.001473519);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.001348882);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.000687291);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.0007533558);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.0005091311);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.0003711162);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,0.0004038709);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,0.0002773986);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,1.511436e-06);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(2897);

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
