#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu May 25 11:56:11 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2183529,-0.6234971,1.171633,7.98479);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetFillStyle(4000);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15709);
   Aplanarity_tags_16->SetRightMargin(0.1234783);
   Aplanarity_tags_16->SetBottomMargin(0.12);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(6164719);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",50,0,1);
   st_stack_16->SetMinimum(2.567423);
   st_stack_16->SetMaximum(1.330336e+07);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetTitle("Aplanarity");
   st_stack_16->GetXaxis()->SetRange(1,50);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Event/0.02");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetTitleSize(0.037);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,4487237);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,629222.4);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,161630.5);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,51161.29);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,16416.13);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,6590.484);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,3360.264);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,1633.5);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,1438.222);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,297.3513);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,331.8174);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,504.6702);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,128.7526);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,73.03501);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,101.74);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.5033839);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,18.6873);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,9.914737);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,70814.99);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,28422.43);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,9337.681);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,5295.159);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,3052.551);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,1072.835);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,727.6605);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,493.6258);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,536.957);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,68.82684);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,78.38045);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,316.7878);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,45.67296);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,38.97943);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,44.54311);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.5033839);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,12.58297);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,9.914737);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(246147);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,629479.4);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,93634.77);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,24266.6);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,8622.839);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,3735.235);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,1849.291);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,1001.221);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,563.5943);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,343.1834);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,205.3767);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,130.0418);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,85.65421);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,52.16693);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,32.06068);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,22.65626);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,11.44777);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,7.080058);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,4.34075);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,2.167463);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,0.6428832);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,0.5940345);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(22,0.2333687);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,207.673);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,79.86951);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,40.52457);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,24.0999);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,15.82553);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,11.1237);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,8.178121);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,6.12583);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,4.781012);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,3.699901);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,2.931323);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,2.393867);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,1.865852);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,1.469678);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,1.234792);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.8697861);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.69686);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,0.5511804);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.3738236);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,0.198375);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,0.1995205);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(22,0.134912);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(1.193453e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
