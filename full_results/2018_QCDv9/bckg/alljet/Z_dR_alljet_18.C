#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_alljet_18()
{
//=========Macro generated from canvas: Z_dR_alljet_18/Z_dR_alljet_18
//=========  (Thu Feb 16 10:35:36 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_alljet_18 = new TCanvas("Z_dR_alljet_18", "Z_dR_alljet_18",0,0,600,600);
   Z_dR_alljet_18->SetHighLightColor(2);
   Z_dR_alljet_18->Range(-1.310117,-2.102596e+10,7.029799,1.541904e+11);
   Z_dR_alljet_18->SetFillColor(0);
   Z_dR_alljet_18->SetFillStyle(4000);
   Z_dR_alljet_18->SetBorderMode(0);
   Z_dR_alljet_18->SetBorderSize(2);
   Z_dR_alljet_18->SetLeftMargin(0.15709);
   Z_dR_alljet_18->SetRightMargin(0.1234783);
   Z_dR_alljet_18->SetBottomMargin(0.12);
   Z_dR_alljet_18->SetFrameFillStyle(1000);
   Z_dR_alljet_18->SetFrameBorderMode(0);
   Z_dR_alljet_18->SetFrameFillStyle(1000);
   Z_dR_alljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.366687e+11);
   
   TH1F *st_stack_211 = new TH1F("st_stack_211","",30,0,6);
   st_stack_211->SetMinimum(0);
   st_stack_211->SetMaximum(1.366687e+11);
   st_stack_211->SetDirectory(0);
   st_stack_211->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_211->SetLineColor(ci);
   st_stack_211->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_211->GetXaxis()->SetRange(1,30);
   st_stack_211->GetXaxis()->SetLabelFont(42);
   st_stack_211->GetXaxis()->SetTitleOffset(1);
   st_stack_211->GetXaxis()->SetTitleFont(42);
   st_stack_211->GetYaxis()->SetTitle("Events/0.2");
   st_stack_211->GetYaxis()->SetLabelFont(42);
   st_stack_211->GetYaxis()->SetTitleSize(0.037);
   st_stack_211->GetYaxis()->SetTitleFont(42);
   st_stack_211->GetZaxis()->SetLabelFont(42);
   st_stack_211->GetZaxis()->SetTitleOffset(1);
   st_stack_211->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_211);
   
   
   TH1D *VbbHcc_alljet_Z_dR_stack_1 = new TH1D("VbbHcc_alljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(2,2.961528e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(3,1.759477e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(4,4.228164e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(5,3.539997e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(6,3.805589e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(7,4.198686e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(8,4.595867e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(9,5.036279e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(10,5.52764e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(11,6.064866e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(12,6.636967e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(13,7.263618e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(14,7.955601e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(15,8.701027e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(16,9.110827e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(17,7.155251e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(18,6.144874e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(19,5.47999e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(20,4.976615e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(21,4.568334e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(22,4.20848e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(23,3.876857e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(24,3.551345e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(25,3.253138e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(26,3.006893e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(27,2.83251e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(28,2.721377e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(29,2.533314e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(30,2.32782e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(31,1.475235e+11);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(2,859753);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(3,2.157394e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(4,3.309887e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(5,3.028097e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(6,3.144813e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(7,3.293037e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(8,3.443552e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(9,3.612435e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(10,3.781249e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(11,3.979122e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(12,4.156743e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(13,4.361063e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(14,4.567874e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(15,4.766878e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(16,4.876814e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(17,4.326665e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(18,4.018838e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(19,3.779881e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(20,3.606225e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(21,3.434777e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(22,3.302446e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(23,3.168269e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(24,3.028835e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(25,2.895832e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(26,2.790759e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(27,2.697466e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(28,2.643068e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(29,2.538789e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(30,2.442882e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(31,6.107419e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetEntries(2.570898e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_dR_stack_2 = new TH1D("VbbHcc_alljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(2,889.3289);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(3,749030);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(4,1494251);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(5,1813524);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(6,2240925);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(7,2621245);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(8,2932335);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(9,3184132);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(10,3390745);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(11,3579847);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(12,3764118);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(13,3950536);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(14,4135794);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(15,4312448);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(16,4216112);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(17,2600765);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(18,1811277);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(19,1353317);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(20,1044027);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(21,822372.3);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(22,656293);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(23,528099.8);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(24,426379);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(25,345402.7);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(26,279784.8);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(27,227163.8);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(28,183756.1);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(29,147075.6);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(30,117255.8);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(31,396539.3);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(2,9.014898);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(3,255.4534);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(4,358.6677);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(5,396.8971);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(6,442.4407);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(7,477.9955);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(8,504.9255);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(9,526.4666);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(10,542.5418);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(11,557.9479);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(12,570.9461);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(13,585.1112);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(14,599.4005);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(15,613.0574);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(16,605.924);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(17,473.2446);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(18,392.4856);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(19,337.3989);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(20,295.1185);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(21,260.2275);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(22,230.9868);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(23,206.2374);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(24,184.5838);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(25,165.4011);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(26,147.3036);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(27,132.6796);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(28,118.4184);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(29,105.6018);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(30,93.8984);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(31,169.6393);
   VbbHcc_alljet_Z_dR_stack_2->SetEntries(7.847364e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_dR_stack_1","QCD","F");

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
   Z_dR_alljet_18->Modified();
   Z_dR_alljet_18->cd();
   Z_dR_alljet_18->SetSelected(Z_dR_alljet_18);
}
