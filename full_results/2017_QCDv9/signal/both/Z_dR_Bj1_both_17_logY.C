#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_17/Z_dR_Bj1_both_17
//=========  (Thu Mar  9 13:08:27 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_17 = new TCanvas("Z_dR_Bj1_both_17", "Z_dR_Bj1_both_17",0,0,600,600);
   Z_dR_Bj1_both_17->SetHighLightColor(2);
   Z_dR_Bj1_both_17->Range(-1.310117,-0.1362813,7.029799,0.427515);
   Z_dR_Bj1_both_17->SetFillColor(0);
   Z_dR_Bj1_both_17->SetFillStyle(4000);
   Z_dR_Bj1_both_17->SetBorderMode(0);
   Z_dR_Bj1_both_17->SetBorderSize(2);
   Z_dR_Bj1_both_17->SetLogy();
   Z_dR_Bj1_both_17->SetLeftMargin(0.15709);
   Z_dR_Bj1_both_17->SetRightMargin(0.1234783);
   Z_dR_Bj1_both_17->SetBottomMargin(0.12);
   Z_dR_Bj1_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
   Z_dR_Bj1_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(2.19974);
   
   TH1F *st_stack_182 = new TH1F("st_stack_182","",30,0,6);
   st_stack_182->SetMinimum(0.8538356);
   st_stack_182->SetMaximum(2.350365);
   st_stack_182->SetDirectory(0);
   st_stack_182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_182->SetLineColor(ci);
   st_stack_182->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_182->GetXaxis()->SetRange(1,30);
   st_stack_182->GetXaxis()->SetLabelFont(42);
   st_stack_182->GetXaxis()->SetTitleOffset(1);
   st_stack_182->GetXaxis()->SetTitleFont(42);
   st_stack_182->GetYaxis()->SetTitle("Event/0.2");
   st_stack_182->GetYaxis()->SetLabelFont(42);
   st_stack_182->GetYaxis()->SetTitleSize(0.037);
   st_stack_182->GetYaxis()->SetTitleFont(42);
   st_stack_182->GetZaxis()->SetLabelFont(42);
   st_stack_182->GetZaxis()->SetTitleOffset(1);
   st_stack_182->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_182);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,0.3381737);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,1.125139);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,1.243658);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,0.8691381);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,0.5088409);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,0.2907662);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,0.2212352);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,0.1596054);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,0.1485436);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,0.1058768);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,0.1011361);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,0.09955582);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,0.0742718);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,0.07585205);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,0.06953105);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,0.06953105);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,0.03634578);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,0.02844452);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,0.01896301);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,0.004740753);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,0.02311708);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,0.04216636);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,0.04433161);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,0.03706017);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,0.02835659);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,0.02143557);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,0.01869778);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,0.01588133);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,0.0153211);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,0.01293491);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,0.01264201);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,0.01254285);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,0.01083366);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,0.0109483);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,0.0104822);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,0.0104822);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,0.007578618);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,0.006704438);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,0.005474151);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,0.002737075);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(3542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,0.1166744);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,0.5254499);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,0.5821263);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,0.3755586);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,0.1793713);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,0.09840508);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,0.07951297);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,0.05750677);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,0.05460029);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,0.0477493);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,0.04069071);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,0.03217888);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,0.03259409);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,0.02968761);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,0.02844197);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,0.02408226);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,0.01287155);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,0.008096621);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,0.006643381);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,0.003114085);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,0.002906479);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,0.001245634);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,0.001245634);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,0.001245634);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,0.000622817);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(29,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,0.004921612);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,0.01044444);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,0.0109933);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,0.008829954);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,0.006102335);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,0.004519895);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,0.004062923);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,0.003455247);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,0.003366798);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,0.003148496);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,0.002906479);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,0.00258467);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,0.002601291);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,0.002482603);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,0.002429962);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,0.002235981);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,0.001634689);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,0.001296497);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,0.001174395);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.0008040532);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,0.0007767892);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,0.0005085279);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.0005085279);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.0005085279);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.0003595835);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(29,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(11286);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_both_17->Modified();
   Z_dR_Bj1_both_17->cd();
   Z_dR_Bj1_both_17->SetSelected(Z_dR_Bj1_both_17);
}
