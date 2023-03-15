#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Wed Jan 18 11:42:53 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(-1.310117,-2.053125,7.029799,10.5925);
   Z_dR_both_18->SetFillColor(0);
   Z_dR_both_18->SetFillStyle(4000);
   Z_dR_both_18->SetBorderMode(0);
   Z_dR_both_18->SetBorderSize(2);
   Z_dR_both_18->SetLogy();
   Z_dR_both_18->SetLeftMargin(0.15709);
   Z_dR_both_18->SetRightMargin(0.1234783);
   Z_dR_both_18->SetBottomMargin(0.12);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1.558149);
   st->SetMaximum(7.767203e+08);
   
   TH1F *st_stack_147 = new TH1F("st_stack_147","",30,0,6);
   st_stack_147->SetMinimum(0.2913067);
   st_stack_147->SetMaximum(2.127849e+09);
   st_stack_147->SetDirectory(0);
   st_stack_147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_147->SetLineColor(ci);
   st_stack_147->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_147->GetXaxis()->SetRange(1,30);
   st_stack_147->GetXaxis()->SetLabelFont(42);
   st_stack_147->GetXaxis()->SetTitleOffset(1);
   st_stack_147->GetXaxis()->SetTitleFont(42);
   st_stack_147->GetYaxis()->SetTitle("Events/0.2");
   st_stack_147->GetYaxis()->SetLabelFont(42);
   st_stack_147->GetYaxis()->SetTitleSize(0.037);
   st_stack_147->GetYaxis()->SetTitleFont(42);
   st_stack_147->GetZaxis()->SetLabelFont(42);
   st_stack_147->GetZaxis()->SetTitleOffset(1);
   st_stack_147->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_147);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,5276.099);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,6226172);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,7358943);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,5411070);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,4847423);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,4236958);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,4240991);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,4184183);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,4857127);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,4341222);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,4788198);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,5733169);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,5930761);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,6905501);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,7310588);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,4213665);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,2918984);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,2250779);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,1475145);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,765673.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,625266.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,462031);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,282440.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,227387.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,53154.54);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,39201.49);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,5006.278);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,1554.151);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,2307.034);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,212712.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,246259.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,201797.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,204893.4);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,181605.4);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,193322.4);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,194666.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,235273.9);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,215853.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,215031.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,250001.5);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,251615.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,291492.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,286610.9);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,207866.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,172497.5);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,169311.4);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,130694.7);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,71084.73);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,73379.4);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,71260.33);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,63599);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,57414.04);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,8941.86);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,18735.35);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,2887.355);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,1553.463);
   VbbHcc_both_Z_dR_stack_1->SetEntries(528827);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,44.21713);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,64619.58);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,125346.3);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,149628.3);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,182324);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,212994.5);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,242183.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,271085.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,300301.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,332143.9);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,365263.5);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,400358.3);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,435426.1);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,466372.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,456614.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,241607.5);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,138002.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,82286.35);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,48810.56);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,28367.66);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,15986.21);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,8696.513);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,4472.629);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,2100.264);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,880.9941);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,313.9113);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,77.76728);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,3.998284);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,2.016066);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,80.86048);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,112.4064);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,122.7553);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,136.1121);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,146.6396);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,156.6152);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,165.4911);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,174.203);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,183.9731);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,191.7278);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,200.9336);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,210.1791);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,218.0172);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,215.5491);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,157.7529);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,118.7155);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,91.36254);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,70.74296);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,54.05864);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,40.67275);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,30.19946);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,20.80536);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,14.27321);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,10.06649);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,5.614631);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,3.752977);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.5723624);
   VbbHcc_both_Z_dR_stack_2->SetEntries(5.602093e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_18->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->SetSelected(Z_dR_both_18);
}
