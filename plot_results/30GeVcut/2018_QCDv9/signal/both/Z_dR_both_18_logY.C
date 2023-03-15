#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Tue Feb 14 16:07:56 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(-1.310117,0.4660427,7.029799,2.872794);
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
   st->SetMinimum(10);
   st->SetMaximum(328.8807);
   
   TH1F *st_stack_147 = new TH1F("st_stack_147","",30,0,6);
   st_stack_147->SetMinimum(5.686603);
   st_stack_147->SetMaximum(428.6657);
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
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,1.076268);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,1.642168);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,2.015382);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,2.259552);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,2.030433);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,1.868374);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,1.815914);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,1.528989);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,1.517325);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,1.358198);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,1.297269);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,1.348291);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,1.524589);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,1.315423);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,0.4493301);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,0.2306067);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,0.1117273);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,0.0679357);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,0.04417223);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,0.04312501);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,0.01504839);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,0.0116052);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,0.002532203);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,0.002358174);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,0.05784121);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,0.06834179);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,0.07890614);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,0.09025114);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,0.07467287);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,0.0734147);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,0.0761366);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,0.06926444);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,0.06427361);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,0.06128351);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,0.0607426);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,0.06134096);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,0.06537414);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,0.06131849);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,0.03541951);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,0.02479262);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,0.01726311);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,0.01327095);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,0.01205402);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,0.01429983);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,0.006192106);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,0.005893307);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,0.002532203);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,0.002358174);
   VbbHcc_both_Z_dR_stack_1->SetEntries(9410);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,0.3767348);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,0.8127881);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,1.00664);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,1.029255);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,0.8262605);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,0.5670829);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,0.396917);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,0.3182875);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,0.264147);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,0.2616964);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,0.3050968);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,0.3014031);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,0.3361547);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,0.3326091);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,0.1474229);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,0.07208193);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,0.04458468);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,0.02920956);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,0.01521283);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,0.00781018);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,0.007376608);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,0.002190522);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,0.003073239);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,0.01235787);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,0.01726587);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,0.01953206);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,0.02026245);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,0.02194688);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,0.01971268);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,0.0118755);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,0.01065716);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,0.009791084);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,0.01016876);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,0.01104651);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,0.01052584);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,0.01106578);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,0.01170509);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,0.008093731);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,0.004978391);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,0.00394487);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,0.003166193);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,0.002313982);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,0.00167378);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,0.001619971);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,0.0008298273);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,0.001098495);
   VbbHcc_both_Z_dR_stack_2->SetEntries(21941);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","ZHcc","F");

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
