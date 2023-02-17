#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_17/Z_dR_Bj0_tags_17
//=========  (Thu Feb 16 10:37:18 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_17 = new TCanvas("Z_dR_Bj0_tags_17", "Z_dR_Bj0_tags_17",0,0,600,600);
   Z_dR_Bj0_tags_17->SetHighLightColor(2);
   Z_dR_Bj0_tags_17->Range(-1.310117,0.5532493,7.029799,2.532204);
   Z_dR_Bj0_tags_17->SetFillColor(0);
   Z_dR_Bj0_tags_17->SetFillStyle(4000);
   Z_dR_Bj0_tags_17->SetBorderMode(0);
   Z_dR_Bj0_tags_17->SetBorderSize(2);
   Z_dR_Bj0_tags_17->SetLogy();
   Z_dR_Bj0_tags_17->SetLeftMargin(0.15709);
   Z_dR_Bj0_tags_17->SetRightMargin(0.1234783);
   Z_dR_Bj0_tags_17->SetBottomMargin(0.12);
   Z_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_17->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(173.0686);
   
   TH1F *st_stack_50 = new TH1F("st_stack_50","",30,0,6);
   st_stack_50->SetMinimum(6.176236);
   st_stack_50->SetMaximum(215.9279);
   st_stack_50->SetDirectory(0);
   st_stack_50->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_50->SetLineColor(ci);
   st_stack_50->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_50->GetXaxis()->SetRange(1,30);
   st_stack_50->GetXaxis()->SetLabelFont(42);
   st_stack_50->GetXaxis()->SetTitleOffset(1);
   st_stack_50->GetXaxis()->SetTitleFont(42);
   st_stack_50->GetYaxis()->SetTitle("Events/0.2");
   st_stack_50->GetYaxis()->SetLabelFont(42);
   st_stack_50->GetYaxis()->SetTitleSize(0.037);
   st_stack_50->GetYaxis()->SetTitleFont(42);
   st_stack_50->GetZaxis()->SetLabelFont(42);
   st_stack_50->GetZaxis()->SetTitleOffset(1);
   st_stack_50->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_50);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,0.301828);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,1.207312);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,1.170966);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,0.9133852);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,0.4487913);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,0.2528402);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,0.2449389);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,0.1311608);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,0.1422226);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,0.1042966);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,0.1027163);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,0.09165457);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,0.07901256);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,0.0647903);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,0.0679508);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,0.05530879);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,0.03318527);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,0.03318527);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,0.01264201);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,0.02844452);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,0.02183951);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,0.04367901);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,0.04301651);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,0.03799181);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,0.02663087);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,0.01998877);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,0.01967397);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,0.01439677);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,0.01499158);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,0.01283802);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,0.01274039);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,0.01203483);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,0.01117406);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,0.01011854);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,0.0103624);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,0.009348892);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,0.00724162);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,0.00724162);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,0.004469625);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,0.006704438);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(3477);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,0.123733);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,0.5233739);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,0.558044);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,0.3593654);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,0.1714823);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,0.09612142);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,0.06892508);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,0.06290451);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,0.04816451);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,0.04691888);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,0.04069071);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,0.0330093);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,0.03134845);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,0.03280169);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,0.02221381);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,0.02719634);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,0.01577803);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,0.007681409);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,0.006020564);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,0.003736902);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,0.002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,0.001868451);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,0.000622817);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,0.0050683);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,0.01042379);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,0.01076351);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,0.008637493);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,0.005966631);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,0.004467141);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,0.003782755);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,0.00361377);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,0.003162155);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,0.003120997);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,0.002906479);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,0.002617808);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,0.002551101);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,0.002609563);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,0.00214749);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,0.002376155);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,0.001809864);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,0.001262816);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,0.001117991);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,0.0008807962);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.0006565067);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.000622817);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.0003595835);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(11007);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","ZHcc","F");

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
   Z_dR_Bj0_tags_17->Modified();
   Z_dR_Bj0_tags_17->cd();
   Z_dR_Bj0_tags_17->SetSelected(Z_dR_Bj0_tags_17);
}
