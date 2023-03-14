#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_17/Z_dR_Bj0_tags_17
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_17 = new TCanvas("Z_dR_Bj0_tags_17", "Z_dR_Bj0_tags_17",0,0,600,600);
   Z_dR_Bj0_tags_17->SetHighLightColor(2);
   Z_dR_Bj0_tags_17->Range(-1.310117,-3.461895,7.029799,0.3842592);
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
   
   TH1F *st_stack_50 = new TH1F("st_stack_50","",30,0,6);
   st_stack_50->SetMinimum(18.39606);
   st_stack_50->SetMaximum(0.99918);
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
   st_stack_50->GetYaxis()->SetTitle("Event/0.2");
   st_stack_50->GetYaxis()->SetLabelFont(42);
   st_stack_50->GetYaxis()->SetTitleSize(0.037);
   st_stack_50->GetYaxis()->SetTitleFont(42);
   st_stack_50->GetZaxis()->SetLabelFont(42);
   st_stack_50->GetZaxis()->SetTitleOffset(1);
   st_stack_50->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_50);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,0.2131721);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,0.8526883);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,0.8270183);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,0.6450966);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,0.3169679);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,0.1785735);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,0.172993);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,0.09263498);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,0.1004476);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,0.07366155);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,0.07254547);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,0.06473288);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,0.05580421);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,0.04575945);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,0.04799162);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,0.03906294);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,0.02343777);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,0.02343777);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,0.008928673);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,0.02008951);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,0.002232168);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,0.001116084);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,0.001116084);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,0.001116084);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,0.01542459);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,0.03084918);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,0.03038128);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,0.02683248);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,0.01880858);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,0.01411747);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,0.01389514);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,0.01016801);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,0.0105881);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,0.00906711);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,0.008998158);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,0.008499843);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,0.007891907);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,0.007146425);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,0.007318653);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,0.006602843);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,0.00511454);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,0.00511454);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,0.003156763);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,0.004735144);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,0.001578381);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,0.001116084);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,0.001116084);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,0.001116084);
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
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,0.0873889);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,0.3696433);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,0.3941298);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,0.253809);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,0.1211128);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,0.06788768);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,0.04867972);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,0.04442758);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,0.03401715);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,0.0331374);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,0.02873863);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,0.02331348);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,0.02214048);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,0.02316686);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,0.01568895);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,0.01920796);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,0.01114355);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,0.00542515);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,0.004252144);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,0.002639262);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,0.001466257);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,0.001319631);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,0.0005865027);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,0.000439877);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,0.0001466257);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,0.003579589);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,0.00736201);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,0.007601943);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,0.006100403);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,0.004214053);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,0.003155008);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,0.002671647);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,0.002552298);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,0.002233336);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,0.002204267);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,0.002052759);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,0.001848879);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,0.001801766);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,0.001843056);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,0.001516708);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,0.001678207);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,0.001278253);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,0.0008918891);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,0.0007896034);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,0.00062208);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.0004636711);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.000439877);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.0002932513);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.0002539631);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.0001466257);
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
