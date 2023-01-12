#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_all_logY()
{
//=========Macro generated from canvas: Z_dR_both_all/Z_dR_both_all
//=========  (Mon Dec 19 11:15:39 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_both_all = new TCanvas("Z_dR_both_all", "Z_dR_both_all",0,0,600,600);
   Z_dR_both_all->SetHighLightColor(2);
   Z_dR_both_all->Range(-1.310117,-2.097684,7.029799,11.022);
   Z_dR_both_all->SetFillColor(0);
   Z_dR_both_all->SetFillStyle(4000);
   Z_dR_both_all->SetBorderMode(0);
   Z_dR_both_all->SetBorderSize(2);
   Z_dR_both_all->SetLogy();
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
   st->SetMinimum(1.654733);
   st->SetMaximum(1.826201e+09);
   
   TH1F *st_stack_132 = new TH1F("st_stack_132","",30,0,6);
   st_stack_132->SetMinimum(0.299694);
   st_stack_132->SetMaximum(5.129003e+09);
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
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(2,8134.811);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(3,1.375403e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(4,1.688859e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(5,1.27577e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(6,1.139246e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(7,1.033831e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(8,1.021995e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(9,9914818);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(10,1.087454e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(11,1.044124e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(12,1.128663e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(13,1.286724e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(14,1.397168e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(15,1.588957e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(16,1.724345e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(17,1.046589e+07);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(18,6862366);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(19,4971779);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(20,3333337);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(21,2336584);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(22,1525323);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(23,1196653);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(24,684940.2);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(25,461959.4);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(26,179618.5);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(27,82187.35);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(28,33433.18);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(29,1646.982);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(2,2212.706);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(3,266756.4);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(4,318351.8);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(5,284130.9);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(6,280385.6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(7,267823.8);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(8,281680.1);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(9,279230.9);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(10,314654.6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(11,301059.7);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(12,306042.6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(13,340815.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(14,355421.9);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(15,392493.2);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(16,404735.7);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(17,309933.7);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(18,251453.9);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(19,224400.7);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(20,176862.4);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(21,139785.2);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(22,113400.1);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(23,107977.3);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(24,83419.13);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(25,75014.79);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(26,32517.5);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(27,23181.04);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(28,17904.08);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(29,1418.335);
   VbbHcc_both_Z_dR_all_stack_1->SetEntries(1763470);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(2,96.91525);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(3,142618.5);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(4,279173.8);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(5,333336.1);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(6,406085.4);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(7,474591.5);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(8,539464.4);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(9,603614.1);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(10,669141.4);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(11,738965.8);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(12,813470.2);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(13,892409.8);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(14,970022);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(15,1039908);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(16,1018556);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(17,537083.4);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(18,306756.5);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(19,182435.1);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(20,107954.6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(21,62590.79);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(22,35305.89);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(23,19093.45);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(24,9784.15);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(25,4611.312);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(26,1937.198);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(27,668.2511);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(28,158.1183);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(29,7.751696);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(2,2.789454);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(3,109.6345);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(4,153.5644);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(5,167.7058);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(6,185.6016);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(7,200.4366);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(8,213.7918);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(9,225.9202);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(10,237.9306);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(11,250.3547);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(12,262.4628);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(13,274.8896);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(14,287.1093);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(15,297.812);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(16,294.6889);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(17,214.5201);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(18,161.9231);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(19,124.6896);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(20,95.99058);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(21,73.24629);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(22,54.94695);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(23,40.4622);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(24,28.35833);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(25,19.47962);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(26,13.0772);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(27,7.406945);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(28,4.291762);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(29,0.7468851);
   VbbHcc_both_Z_dR_all_stack_2->SetEntries(1.41127e+08);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_1","QCD","F");

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
